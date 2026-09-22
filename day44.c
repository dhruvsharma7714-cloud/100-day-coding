/*Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);   // reads a full line including spaces

    int i;
    int length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Output: %s\n", str);

    return 0;
}