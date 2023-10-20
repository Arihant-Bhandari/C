#include<stdio.h>

int UniqueElements(int A[], int n)
{
	int i, j; //counter variables
	for(i=0; i<=n-2; i++) //outer loop
	{
		for(j=i+1;j<=n-1;j++) //inner loop
		{
			if(A[i] == A[j]) //working rule to see if two elements are found same, if yes the elements are not unique
			return 0;
		}
	}
	return 1;
}

int main()
 {
    //details
    printf("\nProgram to find if repeating element(s) are present in the given Array \n");
    printf("Author : Arihant Bhandari \n");   
    printf("Experiment Date: 25-08-2023 \n");                       
    printf("Submission Date : 03-10-2023\n\n");

    printf("---------------------------------------------------------------------------------------------------------------");

    int A[50], n, i, flag; //declaration
   
    printf("\nEnter the Array Size: "); //for n, holds array size
    scanf("%d",&n);

    printf("\nEnter the Array Elements: \n"); //iterating through 0 to n-1 to feed values to array A
    for(i=0; i<=n-1; i++)
    {
      printf("Enter element number %d: ", i+1);
      scanf("%d",&A[i]);
	}
	printf("\nThe elements entered for the array are:\n"); //displaying array values
	printf("[ ");
	for(i=0; i<=n-1; i++)
    {
      printf("%d ", A[i]);      
	}
	printf("]\n");
	
	flag = UniqueElements(A, n); //function call returning in binary value of 0 : non-unique and 1 : unique as flag value
	
	if(flag == 1) //checking value of flag
	printf("\nThe elements in given array are unique.\n\n");
	else
	printf("\nThe elements in given array are not unique.\n\n");

    return 0;
}