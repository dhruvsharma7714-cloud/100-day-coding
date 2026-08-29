/*Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/



#include <stdio.h>

int main()
{
    long int n, temp, rem;
    long int complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &n);

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;

        if(rem == 0)
            complement = complement + 1 * place;
        else
            complement = complement + 0 * place;

        place = place * 10;
        temp = temp / 10;
    }

    printf("1's complement: %ld\n", complement);

    return 0;
}