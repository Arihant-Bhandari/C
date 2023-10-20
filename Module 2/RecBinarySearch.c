#include <stdio.h>
#include <conio.h>

int RecBinarySearch(int A[], int l, int r, int key)
{
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (A[mid] == key)
        {
            return mid;
        }
        else if (A[mid] < key)
        {
            return RecBinarySearch(A, mid + 1, r, key);
        }
        else
        {
            return RecBinarySearch(A, r, mid - 1, key);
        }
    }
    return -1;
}
int main()
{
    // details
    printf("\nProgram for Binary Search using Recursive Divide-and-Conquer approach \n");
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
        printf("Enter value of element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nEnter value of key: ");
    scanf("%d", &key);

    int pos = RecBinarySearch(a, 0, n - 1, key);

    if (pos == -1)
        printf("\nElement not found.\n\n");
    else
        printf("\nElement found at %d position.\n\n", pos + 1);

    return 0;
}