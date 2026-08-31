/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n, k;
    float sum = 0, num, den;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        num = 2 * k - 1;
        den = 2 * k;
        sum = sum + num / den;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}