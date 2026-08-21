/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int main()
{
    int n , fine1, fine2, fine3,fine4 , fine;
    printf("enter the no days: ");
    scanf("%d" , &n);

    if(n<=5)
    {
        fine = n*2;
        printf("fine : %d" , fine);
    }

    else if (n<=10)
    {
        fine1 = 5*2;
        fine2 = (n-5)*4;
        fine3 = fine1 + fine2;
        printf("fine : %d" , fine3);
    }

    else if (n<=20)
    {
fine1 = 5*2;
        fine2 = 5*4;
        fine3 =(n-10)*6;
        fine4 = fine1 + fine2 + fine3;
        printf("fine : %d" , fine4);
    }
    else 
    {

    
    ("membership cancelled");

}

}
