#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

typedef struct stack node;
node *start = NULL;
node *top = NULL;

// Function to take choice for operations on the stack
int menu()
{
    int ch;
    printf("\n\n\tStack operations using pointers..");
    printf("\n\t-----------**********-------------\n");
    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Display");
    printf("\n4. Quit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    return ch;
}

// Function to create a node for the stack dynamically
node *getnode()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    return temp;
}

// Function to push an element into the stack
void push(node *newnode)
{
    if (newnode == NULL)
    {
        printf("\nStack Overflow..");
        return;
    }
    if (start == NULL)
    {
        start = newnode;
        top = newnode;
    }
    else
    {
        top->next = newnode;
        top = newnode;
    }
    printf("\nData pushed into the stack.");
}

// Function to pop an element from the stack
void pop()
{
    if (top == NULL)
    {
        printf("\nStack underflow");
        return;
    }
    node *temp = start;
    if (start->next == NULL)
    {
        printf("\nPopped element is %d\n", top->data);
        start = NULL;
        free(top);
        top = NULL;
    }
    else
    {
        while (temp->next != top)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        printf("\nPopped element is %d\n", top->data);
        free(top);
        top = temp;
    }
}

// Function to display the elements in the stack
void display()
{
    node *temp;
    if (top == NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        temp = start;
        printf("\nElements in the stack:");
        while (temp != NULL)
        {
            printf("%5d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int ch;
    node *newnode;

    printf("\nProgram for linked list implementation of a stack\n");
    printf("Author: Arihant Bhandari\n");
    printf("Experiment Date: 06-10-2023\n");
    printf("Submission Date: 16-10-2023\n");
    printf("------------------------------------------------\n");

    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            newnode = getnode();
            push(newnode);
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
    } while (ch != 4);

    return 0;
}