/*Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    /* copy first array into merged */
    for (i = 0; i < n1; i++)
        merged[i] = arr1[i];

    /* copy second array right after first array's elements */
    for (i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);

    printf("\n");

    return 0;
}