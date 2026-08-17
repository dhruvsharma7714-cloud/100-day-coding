/*6: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main()
{
    int a , b , c;
    printf("enter three numbers: ");
    scanf("%d %d %d" , &a,&b,&c);

    if(a>b&&c)
    {
        printf("a is greatest among the three" , a);
          }
  else if (b>a&&c)
  { 
    printf("b is greatest among the three" , b);
  }

         else {
         printf("c is greatest among the three" , c);

         }
         return 0;
        }
  

   
    

        

    