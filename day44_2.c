/*Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';   // remove trailing newline

    int spaces = 0, digits = 0, special = 0;
    int i;
    int length = strlen(str);

    for (i = 0; i < length; i++) {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (!isalpha(ch)) {
            // not a letter, not a digit, not a space -> special character
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}