/*Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    enum Gender gender;
};

int main()
{
    struct Person p;
    char str[20];

    scanf("%s", str);

    if (strcmp(str, "MALE") == 0)
    {
        p.gender = MALE;
    }
    else
    {
        p.gender = FEMALE;
    }

    switch (p.gender)
    {
        case MALE:
            printf("Male");
            break;

        case FEMALE:
            printf("Female");
            break;
    }

    return 0;
}