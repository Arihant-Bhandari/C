#include <stdio.h>

void BubbleSort(int A[],int n)
{
    int temp;
    for(int i = 0;i<n; i++)
    {
        for(int j= 0; j<n-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main() 
{
    printf("\nProgram for sorting an array using Brute Force based Bubble sort \n");
    printf("Author : Arihant Bhandari \n");
    printf("Experiment Date: 11-09-2023 \n");
    printf("Submission Date : 03-10-2023\n\n");
    
    printf("---------------------------------------------------------------------------------------------------------------");

    int a[50];
    int n = 0;

    printf("\nEnter value of n: ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 0;i<n; i++) 
    {
        printf("enter value of element %d: ",i+1);
        scanf("%d", &a[i]);
    }

    BubbleSort(a,n);

    printf("\nSorted array :\n[ ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n\n");
}