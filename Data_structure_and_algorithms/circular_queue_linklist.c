#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0, *newnode, *temp, *rear = 0;
// rear temp ka kaam krega
void node()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data/element of the queue : ");
    scanf("%d", &newnode->data);
    printf("your data stored at %u \n", &newnode->next);
    newnode->next = 0;
}
void enqueue()
{
    node();
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
        newnode->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        newnode->next = front;
    }
}
void dequeue() // front se dlt vala function
{
    if ((rear == 0) && (front == 0))
    {
        printf("queue is empty !!");
    }
    else
    {
        temp = front;
        printf("deleted element is %d", front->data);
        front = front->next;
        free(temp);
    }
}
void peek()
{
    if ((rear == 0) && (front == 0))
    {
        printf("queue is empty !!");
    }
    else
    {
        printf("the first element of queue is : %d", front->data);
    }
}
void display()
{
    if ((rear == 0) && (front == 0))
    {
        printf("queue is empty !!");
    }
    temp = front;
    int i = 1;
    while (temp->next != front)
    {
        printf("the data of linklist of %d node at address %u is : %d\n", i, temp, temp->data);
        temp = temp->next;
        i++;
    }
    printf("the data ofh linklist of %d node at address %u is : %d\n", i, temp, temp->data);
}
int main()
{
    int choice;
    printf("enter your choice \n 1 : add a element ! \n 2 : delete the element ! \n 3: the first elemnt of queue \n 4 : display the element\n choice : ");
    scanf("%d", &choice);
    while (1)
    {
        switch (choice)
        {
        case 1:
            printf("\n-------------------------**************------------------------\n");
            enqueue();
            printf("\n-------------------------**************------------------------\n");
            break;
        case 2:
            printf("\n-------------------------**************------------------------\n");
            dequeue();
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
            break;
        }
        printf("enter your choice \n 1 : add a element ! \n 2 : delete the element ! \n 3: the first elemnt of queue \n 4 : display the element\n choice : ");
        scanf("%d", &choice);
    }
    return 0;
}