/*Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main()
{
    long int n, temp, rem;
    long int product = 1;

    printf("Enter a number: ");
    scanf("%ld", &n);

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;

        if(rem % 2 != 0)
            product = product * rem;

        temp = temp / 10;
    }

    printf("Product of odd digits: %ld\n", product);

    return 0;
}