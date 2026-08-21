/*Q24Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main()
{
    int n , c1 , c2 , c3 , c4 , c , c5;
    printf("enter the no of units:");
    scanf("%d" , &n);
    if (n<=100)
    {
        c=n*5;
        printf("bill : %d" , c);

    }
    else if (n<=200)
    {
        c=100*5;
        c1=(n-100)*7 + c;
        printf("bill: %d" , c1);
    }
    
    else if (n<=300)
    {
         c=100*5;
        c1= 100*7;
        c2=(n-200)*10;
        c3= c1 + c2+c;
        printf("bill : %d" , c3);
    }

    else if(n>300)
    {
         c=100*5;
        c1= 100*7;
        c2=100*10;
        c4 = (n-300)*12;
        c5 = c1+c2+c4+c;
        printf("bill : %d" , c5);

    }
}