/*Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
#include <math.h>

int main()
{
    long int num, first, last, temp;
    int digits;

    printf("Enter a number : ");
    scanf("%ld", &num);

    /* count number of digits */
    digits = 0;
    temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        digits++;
    }

    /* find first digit */
    temp = num;
    for (int i = 1; i < digits; i++)
        temp = temp / 10;
    first = temp;

    /* find last digit */
    last = num % 10;

    /* remove old first digit and old last digit, then place last as first and first as last */
    temp = num;
    temp = temp - (first * (long int) pow(10, digits - 1));  /* remove first digit */
    temp = temp / 10;                                        /* remove last digit */
    temp = temp * 10 + first;                                /* put old first digit at the end */
    num = last * (long int) pow(10, digits - 1) + temp;      /* put old last digit at the front */

    printf("Number after swapping first and last digit = %ld\n", num);

    return 0;
}