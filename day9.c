/*Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main()
{
    float r2 , r1, a , b , c,d, real , imaginary;
    printf("enter the values of a , b , c ");
    scanf("%f %f %f " , &a ,&b, &c);
    d = b*b - 4*a*c;

if (d>0)
{
    r1 = (-b + sqrt(d)) / 2*a;
    r2 = (-b - sqrt(d)) / 2*a;
    printf("the roots are real and diffrent: %0.2f %0.2f" , r1 , r2);
}
else if (d==0)
    {
        r1 = (-b + sqrt(d)) / 2*a;
        printf("the roots are real and same , %0.2f %0.2f" , r1);
    }
    else if (d<0)
    {
        real = (-b) / 2*a;
        imaginary = sqrt(-d)/2*a;
        printf("the roots are complex");
    }
else 
{
    printf("invalid input");
}
return 0;

    
}