#include<stdio.h>

void printArray(int A[][20], int n);

// This function computes the multiplication of input matrices A and B with dimensions n-by-n
void MatrixMul(int A[][20], int B[][20], int n)
{
	int C[20][20], i, j, k; //defining counting variables and resultant array 
	
	for (i=0;i<=n-1;i++) //row counter
    {
    	for(j=0;j<=n-1;j++) //column counter
    	{		
           C[i][j] = 0; //initializing
           for(k=0;k<=n-1;k++) //k is used in satisfying matrix multiplication condition of mXn and pXq matrix multiplication with n=p
           {
           	C[i][j] = C[i][j] + A[i][k]*B[k][j]; //working rule of matrix multiplication
		   }
        }
    }
    
    printf("\nThe output matrix C = A * B is as follows:\n");
    printArray(C, n); //printing resultant matrix
}

//This function prints the elements in a matrix
void printArray(int A[][20], int n) 
{ 
    int i, j; //counter variables
    
    for (i=0;i<=n-1;i++) //row counter
    {
    	for(j=0;j<=n-1;j++) //column counter
    	{
    		printf("%d", A[i][j]); //prints element
	        printf(" ");
		}
		printf("\n");	
    }      
}

 void main()
{
	int A[20][20],B[20][20], n, i,j;
    printf("\nProgram for multiplication of two matrices A and B with dimnesions n*n \n");
    printf("Author : Arihant Bhandari \n");   
    printf("Experiment Date: 25-08-2023 \n");                       
    printf("Submission Date : 03-10-2023\n\n");

    printf("---------------------------------------------------------------------------------------------------------------");
    
	printf("\nEnter the matrix dimension : ");//asking dimensions
    scanf("%d", &n);
    printf("\n");
    
    for (i=0;i<=n-1;i++) //input looping for matrix A
    {
    	for(j=0;j<=n-1;j++)
    	{		
      printf("Enter the input for A[%d][%d]: ", i,j);
	  scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n");
    
    for (i=0;i<=n-1;i++) //input looping for matrix B
    {
    	for(j=0;j<=n-1;j++)
    	{		
      printf("Enter the input for B[%d][%d]: ", i,j);
	  scanf("%d", &B[i][j]);
        }
    }
    
    printf("\n");
    printf("The input matrix A of %d * %d dimensions is as follows:\n", n, n);
    printArray(A, n); //printing matrix A
    
    printf("\nThe input matrix B of %d * %d dimensions is as follows:\n", n, n);
    printArray(B, n); //printing matrix B
    
    MatrixMul(A, B, n); //calling function to get matrix multiplication (row-column method)
    
    printf("\n");
}