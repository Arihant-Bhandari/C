#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// creating structure for single linked list
struct slinklist
{
    int data;
    struct slinklist *next;
};

// renaming slinklist as node
typedef struct slinklist node;

node *start = NULL;

// function to ask choice for an operation on single linked list
int menu()
{
    int ch;
    printf("\n 1.Create a list ");
    printf("\n	");
    printf("\n 2.Insert a node at beginning ");
    printf("\n 3.Insert a node at end");
    printf("\n 4.Insert a node at specified position");
    printf("\n	");
    printf("\n 5.Delete a node from beginning");
    printf("\n 6.Delete a node from Last");
    printf("\n 7.Delete a node from specified position");
    printf("\n	");
    printf("\n 8.Traverse the list (Left to Right)");
    printf("\n 9.Traverse the list (Right to Left)");
    printf("\n	");
    printf("\n 10. Count nodes ");
    printf("\n 11. Exit");
    printf("\n\n Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}

// function to create a node dynamically
node *getnode()
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("\n Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}

// function to count the number of nodes in the linked list
int countnode(node *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return (count);
}

// funciton to create a single linked list with n nodes
void createlist(int n)
{
    int i;
    node *newnode;
    node *temp;
    for (i = 1; i <= n; i++)
    {
        newnode = getnode();
        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            temp = start;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
}

// function to insert a node at the beginning of the linked list
void insert_at_beg()
{
    node *newnode;
    newnode = getnode();
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }
    printf("\n New Node has been inserted at the beginning ..");
}

// function to insert a node at the end of the linked list
void insert_at_end()
{
    node *newnode, *temp;
    newnode = getnode();
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
    printf("\n New Node has been inserted at the end ..");
}

// function to insert a node at specified position in the linked list
void insert_at_mid()
{
    node *newnode, *temp, *prev;
    int pos, nodectr, ctr = 1;
    newnode = getnode();
    printf("\n Enter the position: ");
    scanf("%d", &pos);
    nodectr = countnode(start);

    if (pos > 1 && pos < nodectr)
    {
        temp = prev = start;
        while (ctr < pos)
        {
            prev = temp;
            temp = temp->next;
            ctr++;
        }
        prev->next = newnode;
        newnode->next = temp;
        printf("\n New Node has been inserted at the given position ..");
    }
    else
        printf("position %d is not a middle position", pos);
}

// function to delete a node from the beginning of the linked list
void delete_at_beg()
{
    node *temp;
    if (start == NULL)
    {
        printf("\n No nodes are exist..");
        return;
    }
    else
    {
        temp = start;
        start = temp->next;
        free(temp);
        printf("\n Node deleted");
    }
}

// function to delete a node from the end of the linked list
void delete_at_last()
{
    node *temp, *prev;
    if (start == NULL)
    {
        printf("\n Empty List..");
        return;
    }
    else
    {
        temp = start;
        prev = start;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
        printf("\n Node deleted");
    }
}

// funciton to delete a node from a specified position
void delete_at_mid()
{
    int ctr = 1, pos, nodectr;
    node *temp, *prev;
    if (start == NULL)
    {
        printf("\n Empty List..\n");
        return;
    }
    else
    {
        printf("\n Enter position of node to delete: ");
        scanf("%d", &pos);
        nodectr = countnode(start);
        if (pos > nodectr)
        {
            printf("\nThis node doesnot exist\n");
        }
        if (pos > 1 && pos < nodectr)
        {
            temp = prev = start;
            while (ctr < pos)
            {
                prev = temp;
                temp = temp->next;
                ctr++;
            }
            prev->next = temp->next;
            free(temp);
            printf("\n Node deleted..\n");
        }
        else
        {
            printf("\n Invalid position..\n");
            getch();
        }
    }
}

// function to traverse a linked list from Left to Right
void traverse()
{
    node *temp;
    temp = start;
    printf("\n The contents of List (Left to Right): \n");
    if (start == NULL)
    {
        printf("\n Empty List\n");
        return;
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
    }
    printf(" X ");
}

// function to traverse a linked list from Right to Left
void rev_traverse(node *start)
{
    if (start == NULL)
    {
        return;
    }
    else
    {
        rev_traverse(start->next);
        printf("%d -->", start->data);
    }
}

int main()
{
    printf("\nProgram for Single Linked List \n");
    printf("Author : Arihant Bhandari \n");
    printf("Experiment Date: 15-09-2023 \n");
    printf("Submission Date : 16-10-2023\n");
    int ch, n;
    while (1)
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            if (start == NULL)
            {
                printf("\n Number of nodes you want to create: ");
                scanf("%d", &n);
                createlist(n);
                printf("\n List created..\n");
            }
            else
                printf("\n List is already created..\n");
            break;
        case 2:
            insert_at_beg();
            break;
        case 3:
            insert_at_end();
            break;
        case 4:
            insert_at_mid();
            break;
        case 5:
            delete_at_beg();
            break;
        case 6:
            delete_at_last();
            break;
        case 7:
            delete_at_mid();
            break;
        case 8:
            traverse();
            break;
        case 9:
            printf("\n The contents of List (Right to Left): \n");
            rev_traverse(start);
            printf(" X ");
            break;
        case 10:
            printf("\n No of nodes : %d ", countnode(start));
            break;
        case 11:
            exit(0);
        }
        getch();
    }
    return 0;
}