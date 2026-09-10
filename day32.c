/*Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    long int num, temp;
    int count[10] = {0};   /* count[i] = how many times digit i appears */
    int i, maxCount, maxDigit;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    if (num < 0)
        num = -num;   /* handle negative numbers */

    temp = num;

    if (temp == 0)
        count[0] = 1;

    while (temp != 0)
    {
        int digit = temp % 10;
        count[digit]++;
        temp = temp / 10;
    }

    /* find the digit with maximum count; on tie, pick smaller digit */
    maxCount = 0;
    maxDigit = 0;

    for (i = 0; i <= 9; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The most occurring digit is: %d\n", maxDigit);

    return 0;
}