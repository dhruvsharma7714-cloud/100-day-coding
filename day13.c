/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
    int sum, product , divide , multiply , modulus , a , b, option, diffrence;
    printf("1-sum\n2-diffrence\n3-product\n4-divide\n5-modulus\n");
    printf("enter the option: ");
    scanf("%d" , &option);
    switch(option)
{
    case 1:
     printf("enter the value of a and b:");
    scanf("%d %d" ,&a ,&b);
    sum = a+b;
    printf("the sum of the two numbers is: %d", sum);
    break;

    case 2:
    printf("enter the value of a and b:");
    scanf("%d %d" ,&a ,&b);
    diffrence = a-b;
    printf("the diffrence of the two numbers is: %d" , diffrence);
    break;

    case 3:
     printf("enter the value of a and b:");
    scanf("%d %d" ,&a ,&b);
    product = a*b;
    printf("the product of the two numbers is: %d" , product);
    break;

    case 4:
     printf("enter the value of a and b:");
    scanf("%d %d" ,&a ,&b);
    divide = a/b;
    printf("the division of the two numbers: %d" , divide);
    break;

    case 5:
     printf("enter the value of a and b:");
    scanf("%d %d" ,&a ,&b);
    modulus =a%b;
    printf("the modulus of tthe two numbers is: %d" , modulus);
    
    break;
}
return 0;
   
   


}