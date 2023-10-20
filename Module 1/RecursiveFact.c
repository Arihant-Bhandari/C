#include <stdio.h>
#include <conio.h>

int RecFact(int n)
{
    if (n == 0) // base case : for n = 0 : 0! = 1
    return 1;

    else
    return n * RecFact(n - 1); // function call with n multiplied with successive recursions of n-1
}
int main()
{
    // details
    printf("\nProgram for Factorial of a non negative integer with Recursive function \n");
    printf("Author : Arihant Bhandari \n");
    printf("Experiment Date: 25-08-2023 \n");
    printf("Submission Date : 03-10-2023\n\n");

    printf("---------------------------------------------------------------------------------------------------------------");

    int n; // stores no. whose factorial is to be found
    printf("\nenter value of n: ");
    scanf("%d", &n);

    int fact = 0; // stores value of calculated factorial

    if (n >= 0) // condtion checking for valid value
    {
        fact = RecFact(n);
        printf("\nfactorial of %d is: %d \n\n", n, fact);
    }
    else
        printf("\nerror : n is a negative value.\n\n"); // error code for negative value

    return 0;
}