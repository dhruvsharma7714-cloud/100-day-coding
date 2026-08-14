/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
int main()
{
    float principal , rate , time , simple , compound;
    printf("enter the princpal amount: \n");
    scanf("%f" , &principal);
    printf("enter the rate of intrest: \n");
    scanf("%f" , &rate);
    printf("enter the time period: \n");
    scanf("%f" , &time);
    simple  = (principal * rate * time) / 100;
    compound = principal * (1 + rate / 100) * (1 + rate / 100) - principal;
    printf("simple intrest = %f, compund intrest = %f" , simple , compound);
    return 0;


}