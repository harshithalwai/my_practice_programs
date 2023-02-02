/*queue me aage se deletion krte he or piche se insertion*/
#include <stdio.h>
#include <stdlib.h>
#define size 5
int front = -1;
int rear = -1;
int queue[size];
void enqueue()
{
    if (rear >= size - 1)
    {
        printf("queue is full !! \n overflow condition !! \n");
    }
    else if ((rear == -1) && (front == -1))
    {
        front = rear = 0;
        printf("enter the element you want to insert in the queue : ");
        scanf("%d", &queue[rear]);
    }
    else
    {
        rear++;
        printf("enter the element you want to insert in the queue : ");
        scanf("%d", &queue[rear]);
    }
}
void dequeue()
{
    if ((rear == -1) && (front == -1))
    {
        printf("queue is empty !! \n underflow condition !!");
    }
    else if (front == rear)
    {
        printf("deleted element is %d", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("deleted element is : %d", queue[front]);
        front++;
    }
}
void peek()
{
    printf("the first element of queue is : %d", queue[front]);
}
void display()
{
    if ((rear == -1) && (front == -1))
    {
        printf("queue is empty !! ");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("the element of queue is : %d\n", queue[i]);
        }
    }
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