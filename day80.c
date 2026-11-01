/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

struct student
{
    char name[30];
    int roll;
    int marks;
};

int main()
{
    struct student s;
    FILE *fp;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    /* Write records to file */
    fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("Cannot open file");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Student %d -> Name Roll Marks: ", i + 1);
        scanf("%s %d %d", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    /* Read records back from file */
    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open file");
        return 1;
    }

    printf("\n");
    while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    return 0;
}