#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct queue
{
    int data;
    struct queue *next;
};

typedef struct queue node;
node *front = NULL;
node *rear = NULL;

// function to create a node dynamically to insert in linear queue
node *getnode()
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("\nEnter data : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}

// fucntion to insert an element in linear queue
void insertQ()
{
    node *newnode;
    newnode = getnode();
    if (newnode == NULL)
    {
        printf("\nQueue Full");
        return;
    }
    if (front == NULL)
    {
        front = newnode;
        rear = newnode;
        
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    printf("\nData Inserted into the Queue..");
}

// function to delete an element from a linear queue
void deleteQ()
{
    node *temp;
    if (front == NULL)
    {
        printf("\nEmpty Queue..");
        return;
    }
    temp = front;
    front = front->next;
    printf("\nDeleted element from queue is %d ", temp->data);
    free(temp);
}

// function to display the elements present in a linear queue
void displayQ()
{
    node *temp;
    if (front == NULL)
    {
        printf("\nEmpty Queue ");
    }
    else
    {
        temp = front;
        printf("\nElements in the Queue are: ");
        while (temp != NULL)
        {
            printf("%5d ", temp->data);
            temp = temp->next;
        }
    }
}

// function to ask choice from the user about an operation on linear queue
int menu()
{
    int ch;
    printf("\n\n\tQueue operations using pointers..");
    printf("\n\t-----------**********-------------\n");
    printf("\n 1. Insert ");
    printf("\n 2. Delete ");
    printf("\n 3. Display");
    printf("\n 4. Quit ");
    printf("\n\nEnter your choice: ");
    scanf("%d", &ch);
    return ch;
}

// main function
int main()
{
    printf("\nProgram for the implementation of linear queue using linked list\n");
    printf("Author : Arihant Bhandari \n");
    printf("Experiment Date: 11-10-2023 \n");
    printf("Submission Date : 16-10-2023\n");
    printf("---------------------------------------------------------------------------------------------------------------");
    int ch;
    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            insertQ();
            break;
        case 2:
            deleteQ();
            break;
        case 3:
            displayQ();
            break;
        case 4:
            exit(0);
        }
        getch();
    } while (ch != 4);
}
