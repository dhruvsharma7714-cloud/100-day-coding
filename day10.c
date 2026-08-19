/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include <stdio.h>
int main()
{
    int week;
    printf("enter 1- monday , enter 2- tuesday , enter 3- wednesday , enter 4- thursday , enter 5- friday , enter 6- saturday , enter 7- sunday\n");
    scanf("%d" , &week);
    switch(week)
    {
    case 1:
    printf("monday");
    break;

    case 2:
    printf("tuesday");
    break;

    case 3:
    printf("wednesday");
    break;

    case 4:
    printf("thursday");
    break;

    case 5:
    printf("friday");
    break;

    case 6:
    printf("saturday");
    break;

    case 7:
    printf("sunday");
    break;

    default:
    printf("invalid number");
    break;

    return 0;
}

}