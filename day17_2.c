/*Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main() {
    int n, i = 2;

    scanf("%d", &n);

    while (i <= n / 2 && n % i != 0)
        i++;

    if (n > 1 && i > n / 2)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}