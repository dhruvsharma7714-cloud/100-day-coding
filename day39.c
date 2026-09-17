/*Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int matrix[10][10];

    scanf("%d %d", &n, &n);  /* rows and columns, both equal for square matrix */

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}