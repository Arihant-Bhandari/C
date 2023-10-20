#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 50

int isoperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        return 1;
    else
        return 0;
}

int main()
{
    printf("\nProgram for evaluation of the given postfix expression \n");
    printf("Author : Arihant Bhandari \n");
    printf("Experiment Date: 9-10-2023 \n");
    printf("Submission Date : 16-10-2023\n");
    printf("---------------------------------------------------------------------------------------------------------------");
    char postfix[MAX];
    int val;
    char ch;
    int i = 0, top = 0;
    float val_stack[MAX], val1, val2, res;
    printf("\nEnter a postfix expression: ");
    gets(postfix);
    while ((ch = postfix[i]) != '\0')
    {
        if (isoperator(ch) == 1)
        {
            val2 = val_stack[--top];
            val1 = val_stack[--top];
            switch (ch)
            {
            case ' ':
                break;
            case '+':
                res = val1 + val2;
                break;
            case '-':
                res = val1 - val2;
                break;
            case '*':
                res = val1 * val2;
                break;
            case '/':
                res = val1 / val2;
                break;
            case '^':
                res = pow(val1, val2);
                break;
            }
            val_stack[top] = res;
        }
        else
        {
            val_stack[top] = ch - 48; /*convert character digit to integer digit */
        }
        top++;
        i++;
    }
    printf("\nEvaluated Value of %s is : %f\n", postfix, val_stack[0]);
    getch();
    return 0;
}