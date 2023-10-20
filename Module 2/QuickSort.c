#include <stdio.h>

int partition(int A[], int l, int r) 
{
    int p = A[l];
    int i = l; // Start one position l
    int j = r+1;     // Start at r+1

    do
    {
        do
        {
            i += 1;
        } while (A[i] < p);

        do
        {
            j -= 1;
        } while (A[j] > p);

        if(i >= j)
        {
            break;
        }

        // Swap A[i] and A[j]
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }while(i<=j);

    // Swap A[l] and A[j]
    int temp = A[l];
    A[l] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int A[], int l, int r)
{
    int s;

    if (l < r)
    {
        s = partition(A, l, r);
        quickSort(A, l, s-1);
        quickSort(A, s + 1, r);
    }
}

int main() 
{
    printf("\nProgram for sorting an array using Divide-and-Conquer based Quick sort \n");
    printf("Author : Arihant Bhandari \n");
    printf("Experiment Date: 11-09-2023 \n");
    printf("Submission Date : 03-10-2023\n\n");
    
    printf("---------------------------------------------------------------------------------------------------------------");

    int a[50], n;

    printf("\nEnter value of n: ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter value of element %d: ",i+1);
        scanf("%d", &a[i]);
    }

    int l, r = 0;

    printf("\nValid Indices : 1 to %d\n",n);

    printf("\nEnter value of left-bound: ");
    scanf("%d", &l);

    printf("\nEnter value of right-bound: ");
    scanf("%d", &r);

    quickSort(a, l-1, r-1);

    printf("\nSorted array :\n[ ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n\n");
}