#include<stdio.h>

 int BinRec(int n) //function to calculate bits required by a int
 {
 	if (n==1 || n==0)
 	{
 	   return 1;
	}
	else
	{
		return BinRec(n/2)+1; //recursively calling function with working rule of incrementation of bit value as required
	}
 }

void main()
 {
    //details
   printf("\nProgram to determine the number of bits to represent a given decimal number in binary form using BinRec \n");
   printf("Author : Arihant Bhandari \n");   
   printf("Experiment Date: 25-08-2023 \n");                       
   printf("Submission Date : 03-10-2023\n\n");

   printf("---------------------------------------------------------------------------------------------------------------");

   int n, bits;
   printf("\nEnter the Decimal Number: ");
   scanf("%d",&n);

   bits = BinRec(n); //function call

   printf("\n%d bits are required to represent the decimal number %d in binary form.", bits,n);

   printf("\n\n");
 }