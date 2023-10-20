#include <stdio.h>

int MaxElement(int A[],int n) //returns max element in given array
{
    int max = A[0]; //initialising a max element which holds the maximum element in the given array, currently the first element
    for(int i = 1; i<n ; i++) //looping from second to the last element
    {
        if(A[i]>max) //condtion to check if max needs to be updated
        max = A[i];
        else
        continue;
    }
    return max;
}

int main()
 {
    //details
    printf("\nProgram to find Largest element in the given Array Non-Recursively \n");
    printf("Author : Arihant Bhandari \n");   
    printf("Experiment Date: 25-08-2023 \n");                       
    printf("Submission Date : 03-10-2023\n\n");

    printf("---------------------------------------------------------------------------------------------------------------");

   int A[50], n, i, max; //declaration
    
    printf("\nEnter the Array Size: "); //holds input size of array
    scanf("%d",&n);

    printf("\nEnter the Array Elements: \n");
    for(i=0; i<=n-1; i++) //iterating from 0 to n-1 to get array input values
    {
      printf("Enter element number %d: ", i+1);
      scanf("%d",&A[i]);
	}
	printf("\nThe elements entered for the array are:\n"); //displays array elements
	printf("[ ");
	for(i=0; i<=n-1; i++)
    {
      printf("%d ", A[i]);      
	}
	printf("]");
	max = MaxElement (A, n); //holds maximum value from given array
    printf("\n\nThe largest element in the given Array is : %d\n\n", max);
    
    return 0;
 }