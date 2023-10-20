#include <stdio.h>

int max(int x, int y) // max function to find max value between given values
{
  if (x > y) // condtion to check max value
  {
    return x;
  }
  else
  {
    return y;
  }
}

// The function RecMaxElement finds the largest element in the given input Array of n size using Recursion

int RecMaxElement(int A[], int n)
{
  if (n == 1) // base case
  {
    return A[0];
  }
  else // function call to find max element by using max function with successive recursions
  {
    return max(RecMaxElement(A, n - 1), A[n - 1]); // working rule
  }
}

int main()
{
  // details
  printf("\nProgram to find Largest element in the given Array using Recursion \n");
  printf("Author : Arihant Bhandari \n");
  printf("Experiment Date: 25-08-2023 \n");
  printf("Submission Date : 03-10-2023\n\n");

  printf("---------------------------------------------------------------------------------------------------------------");

  int A[50], n, i, max; // declaration

  printf("\nEnter the Array Size: "); // holds input size of array
  scanf("%d", &n);

  printf("\nEnter the Array Elements: \n");
  for (i = 0; i <= n - 1; i++) // iterating from 0 to n-1 to get array input values
  {
    printf("Enter element number %d: ", i + 1);
    scanf("%d", &A[i]);
  }
  printf("\nThe elements entered for the array are:\n"); // displays array elements
  printf("[ ");
  for (i = 0; i <= n - 1; i++)
  {
    printf("%d ", A[i]);
  }
  printf("]");
  max = RecMaxElement(A, n); // holds maximum value from given array
  printf("\n\nThe largest element in the given Array is : %d\n\n", max);

  return 0;
}