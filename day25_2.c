/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main()
{
    int n = 5, i, j;

    for (i = 1; i <= n; i++)
    {
        // print leading spaces
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        // print stars
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}