#include <stdio.h>
#include <stdlib.h>
#define size 5
int stack[size];
int top = -1;
void push()
{
    int num;
    if (top >= size - 1)
    {
        printf("\n-------------------------**************------------------------\n");
        printf("stack is full !! \n ");
        printf("\n-------------------------**************------------------------\n");
    }
    else
    {
        printf("\nenter the elemenet you want to insert : ");
        scanf("%d", &num);
        top++;
        stack[top] = num;
    }
}
void pop()

{
    if (top < 0)
    {
        printf("stack is empty!! \n stack underflow condition!!");
    }
    else
    {
        printf("deleted element from stack is %d ", stack[top]);
        top--;
    }
}
void peek()
{
    if (top < 0)
    {
        printf("stack is empty!! \n stack underflow condition!!");
    }
    else
    {
        printf("the topmost element os stack is %d", stack[top]);
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("\nstack element at index %d is %d\n", i, stack[i]);
    }
}
int main()
{
    int choice;
    printf("enter your choice \n 1 : add a element ! \n 2 : delete the element ! \n 3: the topmost elemnt \n 4 : display the element\n choice : ");
    scanf("%d", &choice);
    while (1)
    {
        switch (choice)
        {
        case 1:
            printf("\n-------------------------**************------------------------\n");
            push();
            if (top >= size - 1)
            {
                printf("stack is full !! \n ");
                break;
            }
            printf("\n-------------------------**************------------------------\n");
            break;
        case 2:
            printf("\n-------------------------**************------------------------\n");
            pop();
            if (top < 0)
            {
                printf("stack is empty!! \n stack underflow condition!!");
                break;
            }
            printf("\n-------------------------**************------------------------\n");
            break;
        case 3:
            printf("\n-------------------------**************------------------------\n");
            peek();
            printf("\n-------------------------**************------------------------\n");
            break;
        case 4:
            printf("\n-------------------------**************------------------------\n");
            display();
            printf("\n-------------------------**************------------------------\n");
            break;
        default:
            printf("\n-------------------------**************------------------------\n");
            printf("\nenter a valid option\n");
            printf("\n-------------------------**************------------------------\n");
            break;
        }
        printf("enter your choice \n 1 : add a element ! \n 2 : delete the element ! \n 3: the topmost elemnt \n 4 : display the element\n choice :");
        scanf("%d", &choice);
    }

    return 0;
}