#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = 0, *newnode, *temp;
void push()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data of the stack : ");
    scanf("%d", &newnode->data);
    newnode->next = top;
    top = newnode;
}
void display()
{

    while (top != 0)
    {
        printf("\nstack element is %d\n", top->data);
        top = top->next;
    }
}
void pop()
{
    temp = top;
    printf("deleted element from stack is %d \n", top->data);
    top = top->next;
    free(temp);
}

void peek()
{
    printf("the topmost element os stack is %d", top->data);
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
            push();
            printf("\n-------------------------**************------------------------\n");
            break;
        case 2:
            pop();

            printf("\n-------------------------**************------------------------\n");
            break;
        case 3:
            peek();
            printf("\n-------------------------**************------------------------\n");
            break;
        case 4:
            display();
            printf("\n-------------------------**************------------------------\n");
            break;
        default:
            printf("\nenter a valid option\n");
            printf("\n-------------------------**************------------------------\n");
            break;
        }
        printf("enter your choice \n 1 : add a element ! \n 2 : delete the element ! \n 3: the topmost elemnt \n 4 : display the element\n choice :");
        scanf("%d", &choice);
    }

    return 0;
}