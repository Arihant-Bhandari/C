#include <stdio.h>
#include <conio.h>

int LinearSearch(int A[], int n, int key)
{
    int i = 0;

    while (i < n && A[i] != key)
    {
        i += 1;
    }
    if (i < n)
        return i;
    else
        return -1;
}
int main()
{
    // details
    printf("\nProgram for Sequential Search using Brute Force Approach \n");
    printf("Author : Arihant Bhandari \n");
    printf("Experiment Date: 11-09-2023 \n");
    printf("Submission Date : 03-10-2023\n\n");

    printf("---------------------------------------------------------------------------------------------------------------");

    int a[50], n, key;
    printf("\nEnter no. of elements: ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter value of %d element: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nEnter value of key: ");
    scanf("%d", &key);

    int pos = LinearSearch(a, n, key);

    if (pos == -1)
        printf("\nElement not found.\n\n");
    else
        printf("\nElement found at %d position.\n\n", pos + 1);

    return 0;
}