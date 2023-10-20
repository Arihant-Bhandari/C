#include<stdio.h>

 int NonBinRec(int n) //function to calculate bits required by a int
 {
 	int count = 1;
 	while (n>1)
 	{
 	  count = count+1; //incementing count if 1 more bit is required
 	  n /=2; //working rule
	}
	return count;
 }

int main()
 {
  //details
  printf("\nProgram to determine the number of bits to represent a given decimal number in binary form using NonBinRec \n");
  printf("Author : Arihant Bhandari \n");   
  printf("Experiment Date: 25-08-2023 \n");                       
  printf("Submission Date : 03-10-2023\n\n");
   
  printf("---------------------------------------------------------------------------------------------------------------");

  int n, bits;
  printf("\nEnter the Decimal Number: ");
  scanf("%d",&n);

  bits = NonBinRec(n); //function call returning no. of bits required to store given value

  printf("\n%d bits are required to represent the decimal number %d in binary form.", bits,n); //printing result

  printf("\n\n");

  return 0;
 }