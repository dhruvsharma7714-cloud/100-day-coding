/*Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, num, digit, count = 0;
    long sum = 0;

    scanf("%d", &n);

    num = n;
    // count number of digits
    while (num != 0) {
        num = num / 10;
        count++;
    }

    num = n;
    while (num != 0) {
        digit = num % 10;
        sum = sum + pow(digit, count);
        num = num / 10;
    }

    if (sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}