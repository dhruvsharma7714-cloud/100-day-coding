/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>

int main()
{
    float radius, area, circumference, pie = 3.14;

    printf("enter the radius of the circle: ");
    scanf("%f", &radius);

    area = pie * radius * radius;
    circumference = 2 * pie * radius;

    printf("the area of the circle is : %f\n", area);
    printf("the circumference of the circle is: %f\n", circumference);

    return 0;
}