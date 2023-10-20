#include <stdio.h>

int expo(int x, int y) // power/exponentiation function
{
	int res=1; //variable to store result
	for(int i = 1; i<=y; i++)
	{
		res = res*x;
	}
	return res;
}

void RecTOH(int n, char S, char A, char D)
{
  if(n==1) //base case : last disk move
  {
    printf("Move disk from %c to %c\n", S, D);
  }
  else
  {
   RecTOH(n-1,S,D,A); //function call with changed destination and auxillary packet
   printf("Move disk from %c to %c\n", S, D);
   RecTOH(n-1,A,S,D); //function call with changed source and auxillary packet
  }
}

int main()
{
  //details
  printf("\nProgram to find moves for Tower of Hanoi puzzle using recursion\n");
  printf("Author: Arihant Bhandari \n");
  printf("Experiment Date: 25-08-2023 \n");
  printf("Submission Date: 03-10-2023\n");

  printf("---------------------------------------------------------------------------------------------------------------");

  int n; //stores no. of disks
  char A,S,D; /*disk value variables for :

  S : Source disk/packet
  A : Auxillary disk/packet
  D : Destination disk/packet

  */
  printf("\nenter value of n: "); //takes in the no. of disks
  scanf("%d",&n);

  if(n>=1) //condition to check for valid no. of disks
  {
    RecTOH(n, 'S','A','D');
    printf("\nTotal no. of disks moves : %d\n\n",expo(2,n)-1); //prints total no. of moves
  }
  else
  printf("error : n is a negative value.\n\n"); //error code for wrong disk input

  return 0;
}