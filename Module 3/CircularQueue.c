#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 6

int CQ[MAX];
int front = 0;
int rear = 0;
int count = 0;

// fucntion to insert an element in circular queue
void insertCQ()
{
    int data;
    if (count == MAX)
    {
        printf("\n Circular Queue is Full");
    }
    else
    {
        printf("\n Enter data: ");
        scanf("%d", &data);
        CQ[rear] = data;
        rear = (rear + 1) % MAX;
        count++;
        printf("\n Data Inserted in the Circular Queue ");
    }
}

// function to delete an element from a circular queue
void deleteCQ()
{
    if (count == 0)
    {
        printf("\n\nCircular Queue is Empty..");
    }
    else
    {
        printf("\n Deleted element from Circular Queue is %d ", CQ[front]);
        front = (front + 1) % MAX;
        count--;
    }
}

// function to display the elements present in a circular queue
void displayCQ()
{
    int i, j;
    if (count == 0)
    {
        printf("\n\n\t Circular Queue is Empty ");
    }
    else
    {
        printf("\n Elements in Circular Queue are: ");
        j = count;
        for (i = front; j != 0; j--)
        {
            printf("%d\t", CQ[i]);
            i = (i + 1) % MAX;
        }
    }
}

// function to ask choice from the user about an operation on circular queue
int menu()
{
    int ch;
    printf("\n\n\tCircular Queue Operations using ARRAY..");
    printf("\n\t-----------********** ------------ \n");
    printf("\n 1. Insert ");
    printf("\n 2. Delete ");
    printf("\n 3. Display");
    printf("\n 4. Quit ");
    printf("\n Enter Your Choice: ");
    scanf("%d", &ch);
    return ch;
}

// main function
int main()
{
    printf("\nProgram for the implementation of circular queue\n");
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
            insertCQ();
            break;
        case 2:
            deleteCQ();
            break;
        case 3:
            displayCQ();
            break;
        case 4:
            exit(0);
        default:
            printf("\n Invalid Choice ");
        }
        getch();
    } while (1);
}