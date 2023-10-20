#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 6

int stack[MAX];
int top = -1;

//funciton to take choice for operations on stack
int menu()
{
  int ch;
  printf("\n\n\tStack operations using ARRAY... ");
  printf("\n\t-----------**********-------------\n");
  printf("\n 1. Push ");
  printf("\n 2. Pop ");
  printf("\n 3. Display");
  printf("\n 4. Quit ");
  printf("\n Enter your choice: "); 
  scanf("%d", &ch);
  return ch;
}

//function to push an element into the stack
void push()
{
  int data;
  if(top == MAX-1)
  {
    printf("\nStack Overflow..");
    return;
  }
  else
  {
    printf("\nEnter data: ");
    scanf("%d", &data);
     top = top + 1;
     stack[top] = data;
    printf("\nData Pushed into the stack.\n");
  }
}

//function to pop an element from the stack
void pop()
{
  if(top == -1)
  {
    printf("\nStack Underflow..");
    return;
  }
  else
     printf("\npopped element is: %d ", stack[top]);
     top--;
}

//function to display the elements in a stack
void display()
{
  int i;
  if(top == -1)
  {
    printf("\nStack empty..");
    return;
  }
  else
  {
    printf("\nElements in stack:");
    for(i = 0; i <= top; i++)
    {
      printf("\t%d", stack[i]);	
	}     
  }
}

//main function
int main()
{
  int ch;
  
    printf("\nProgram for array implementation of a stack \n");
    printf("Author : Arihant Bhandari \n");
    printf("Experiment Date: 04-10-2023 \n");
    printf("Submission Date : 16-10-2023\n");
    printf("---------------------------------------------------------------------------------------------------------------");
  
  do
  {
    ch = menu();
    switch(ch)
    {
     case 1:
             push();
             break;
     case 2:
             pop();
             break;
     case 3:
             display();
             break;
     case 4:
             exit(0);
    }
       getch();
   } while(1);
}
