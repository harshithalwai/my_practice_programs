#include <stdio.h>
#define size 5
int front = -1;
int rear = -1;
int queue[size];
void enqueue()
{
    if ((rear + 1) % size == front)
    {
        printf("queue is full !! ");
    }
    else if ((rear == -1) && (front == -1))
    {
        front = rear = 0;
        printf("enter the element of the queue : ");
        scanf("%d", &queue[rear]);
    }
    else
    {
        rear = (rear + 1) % size;
        printf("enter the element of the queue : ");
        scanf("%d", &queue[rear]);
    }
}
void dequeue()
{
    if ((rear == -1) && (front == -1))
    {
        printf("\nqueue is empty !! \n");
    }
    else if (front == rear)
    {
        printf("deleted element is %d ", queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("deleted element is %d ", queue[front]);
        front = (front + 1) % size;
    }
}
void peek()
{
    if ((rear == -1) && (front == -1))
    {
        printf("\nqueue is empty !! \n");
    }
    else
    {
        printf("top most element is %d\n ", queue[front]);
    }
}
void display()
{

    if ((rear == -1) && (front == -1))
    {
        printf("\nqueue is empty !! \n");
    }
    else
    {
        int j = 1;
        int i = front;
        while (i != rear)
        {
            printf("the %dth queue is : %d\n", j, queue[i]);
            i = (i + 1) % size;
            j++;
        }
        printf("the %dth queue is : %d\n", j, queue[i]);
    }
}

int main()
{
system("cls");
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