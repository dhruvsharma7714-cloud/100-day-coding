Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s[100];
    int n, max = 0, topper = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter name, roll and marks: ");
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);

        if(s[i].marks > max)
        {
            max = s[i].marks;
            topper = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n",
           s[topper].name, s[topper].marks);

    return 0;
}