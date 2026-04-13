#include <stdio.h>

struct student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter ID, Name, Marks: ");
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }

    printf("\nStudent Records:\n");
    for (i = 0; i < 3; i++) {
        printf("ID: %d Name: %s Marks: %.2f\n",
               s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}