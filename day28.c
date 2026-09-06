/*Q55: Write a program to print all the prime numbers from 1 to n.
/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7
Input 2:
20
Output 2:
2 3 5 7 11 13 17 19
*/ 
#include <stdio.h>

int main() {
    int n, i, j, is_prime;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        is_prime = 1;  /* assume i is prime */

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0;  /* i is divisible by j, not prime */
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}