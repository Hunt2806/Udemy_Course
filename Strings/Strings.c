#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len = 0, vowels = 0;

    printf("Enter string: ");
    scanf("%s", str);

    // Length
    while (str[len] != '\0')
        len++;

    printf("Length = %d\n", len);

    // Reverse
    for (i = 0; i < len; i++)
        rev[i] = str[len - i - 1];
    rev[len] = '\0';

    printf("Reversed = %s\n", rev);

    // Palindrome
    if (strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    // Vowels count
    for (i = 0; i < len; i++) {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowels++;
    }

    printf("Vowels = %d\n", vowels);

    return 0;
}