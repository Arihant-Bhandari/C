#include <stdio.h>

void Merge(int B[], int C[], int A[], int p, int q)
{
    int i = 0, j = 0, k = 0, ind1, ind2;

    while (i < p && j < q)
    {
        if (B[i] <= C[j])
        {
            A[k] = B[i];
            i = i + 1;
        }
        else
        {
            A[k] = C[j];
            j = j + 1;
        }
        k = k + 1;
    }
    ind2 = k;
    if (i == p)
    {
        for (ind1 = j; ind1 <= q - 1; ind1++)
        {
            A[ind2] = C[ind1];
            ind2 = ind2 + 1;
        }
    }
    else
    {
        for (ind1 = i; ind1 <= p - 1; ind1++)
        {
            A[ind2] = B[ind1];
            ind2 = ind2 + 1;
        }
    }
}

void mergeSort(int A[], int n)
{
    int i, j = 0, k, B[25], C[25], p, q;
    if (n > 1)
    {
        for (i = 0; i < (n/2); i++)
        {
            B[i] = A[i];
        }
        p = i;
        for (k = n / 2; k <= n - 1; k++)
        {
            C[j] = A[k];
            j++;
        }
        q = j;
        mergeSort(B, p);
        mergeSort(C, q);
        Merge(B, C, A, p, q);
    }
}
int main()
{
    printf("\nProgram for sorting an array using Divide-and-Conquer based Merge sort \n");
    printf("Author : Arihant Bhandari \n");
    printf("Experiment Date: 11-09-2023 \n");
    printf("Submission Date : 03-10-2023\n\n");

    printf("---------------------------------------------------------------------------------------------------------------");

    int a[50], n;

    printf("\nEnter no. of elements: ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter value of element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    mergeSort(a, n);

    printf("\nSorted array :\n[ ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n\n");
}