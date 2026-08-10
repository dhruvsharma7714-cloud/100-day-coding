#include <stdio.h>

int main()
{
    float a, b, sum, diff, product, quotient;
    printf("enter the two numbers : ");
    scanf("%f %f", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;

    if (b == 0)
    {
        printf("invalid input for quotient");
        return 0;
    }
    else
    {
        quotient = a / b;
        printf(" the sum of the two numbers is : %f\n", sum);
        printf(" the difference of the two numbers is : %f\n", diff);
        printf(" the product of the two numbers is : %f\n", product);
        printf(" the quotient of the two numbers is : %f\n", quotient);
        return 0;
    }
}
                                                                                                                                                                                        