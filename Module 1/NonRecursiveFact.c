#include <stdio.h>


int nonRecFact(int n)
{
    int f = 1; // stores value of factorial
    for(int i = 1;i<=n;i++) //;iterating through all numbers between 1 and n
    {
        f = f*i;
    }
    return f;
}
int main()
{
    //details
    printf("\nProgram for Factorial of a non negative integer with Non-recursive (Iterative) function \n");
    printf("Author : Arihant Bhandari \n");   
    printf("Experiment Date: 25-08-2023 \n");                       
    printf("Submission Date : 03-10-2023\n\n");
    
    printf("---------------------------------------------------------------------------------------------------------------");

    int n; //stores the no. whose factorial is to be found
    printf("\nenter value of n: ");
    scanf("%d",&n);

    int fact = 0; //stores resultant factorial value

    if(n>=0) //condition for valid no.
    {
        fact = nonRecFact(n); //calling function
        printf("\nFactorial of %d is: %d \n\n",n,fact);
    }
    else
    printf("\nerror : entered number is a negative value.\n\n"); //error code for wrong input

    return 0;
}