/*Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, first = 1;

    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (first == 0) {
                printf(",");
            }
            first = 0;

            // print substring from index i to j
            int k;
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }

    return 0;
}