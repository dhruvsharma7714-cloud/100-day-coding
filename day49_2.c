/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int i, len;
    int lastSpace = -1;

    printf("Enter full name: ");
    gets(name);

    len = strlen(name);

    /* find the position of the last space, so we know where the surname starts */
    for (i = 0; i < len; i++)
    {
        if (name[i] == ' ')
            lastSpace = i;
    }

    /* print initial for first letter, and for every letter right after a space,
       but only up to the last space (before the surname) */
    printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++)
    {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c.", name[i]);
    }

    /* print the surname in full */
    printf(" ");
    for (i = lastSpace + 1; i < len; i++)
        printf("%c", name[i]);

    return 0;
}