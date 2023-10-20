#include <stdio.h>
#include <conio.h>

void SelectionSort(int a[],int n)
{
    int min,temp; 
    for(int i = 0;i<n-1;i++)
    {
        min = i;
        for(int j = i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main()
{
    printf("\nProgram for sorting an array using Brute Force based Selection sort \n");
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

    SelectionSort(a,n);

    printf("\nSorted array :\n[ ");
    
    for(int i = 0; i<n; i++)       
    {
        printf("%d ",a[i]);
    }
    printf("]\n\n");

    return 0;
}