/*Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int diagonal[10];
    int distinct = 1;  /* flag: 1 means distinct so far */

    scanf("%d %d", &n, &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    /* store diagonal elements separately */
    for (i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    /* compare every pair of diagonal elements */
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0;
            }
        }
    }

    if (distinct == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}