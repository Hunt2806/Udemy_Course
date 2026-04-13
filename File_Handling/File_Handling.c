#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct student s;

    // WRITE
    fp = fopen("students.txt", "w");
    printf("Enter ID, Name, Marks: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);
    fprintf(fp, "%d %s %.2f\n", s.id, s.name, s.marks);
    fclose(fp);

    // APPEND
    fp = fopen("students.txt", "a");
    printf("Enter another record: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);
    fprintf(fp, "%d %s %.2f\n", s.id, s.name, s.marks);
    fclose(fp);

    // READ
    fp = fopen("students.txt", "r");
    printf("\nDatabase:\n");
    while (fscanf(fp, "%d %s %f", &s.id, s.name, &s.marks) != EOF) {
        printf("%d %s %.2f\n", s.id, s.name, s.marks);
    }
    fclose(fp);

    return 0;
}