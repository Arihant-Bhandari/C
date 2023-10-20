#include <stdio.h>
#include <conio.h>

void InsertionSort(int a[],int n)
{
    int t = 0,i = 0;
    
    for(int j = 1;j<n;j++)
    {
        t = a[j];
        i = j-1; 
        
        while(i>=0 && a[i]>t)
        {
            a[i+1]=a[i];
            i--;
        }

        a[i+1] = t;
    }
}

int main()
{
    printf("\nProgram for sorting an array using Brute Force based Insertion sort \n");
    printf("Author : Arihant Bhandari \n");   
    printf("Experiment Date: 11-09-2023 \n");                              
    printf("Submission Date : 03-10-2023\n\n");
    
    printf("---------------------------------------------------------------------------------------------------------------");
   
    int a[50],n;

    printf("\nEnter no. of elements: ");
    scanf("%d",&n);

    printf("\n");

    for(int i = 0; i<n; i++)       
    {
        printf("Enter value of %d element: ",i+1);
        scanf("%d",&a[i]);
    }

    InsertionSort(a,n);

    printf("\nSorted array :\n[ ");
    
    for(int i = 0; i<n; i++)       
    {
        printf("%d ",a[i]);
    }
    printf("]\n\n");

    return 0;
}