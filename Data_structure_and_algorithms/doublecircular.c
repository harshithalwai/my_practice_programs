#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous;
} *head, *temp, *newnode, *tail, *pre;
void node()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data of the node : ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    newnode->previous = 0;
}
void create()
{
    node();
    if (head == 0)
    {
        head = temp = newnode;
        tail = newnode;
        head->previous = newnode;
        newnode->next = head;
    }
    else
    {
        temp->next = newnode;
        newnode->previous = temp;
        temp = newnode;
        tail = newnode;
        head->previous = newnode;
        newnode->next = head;
    }
}
void display()
{
    temp = head;
    int i = 1;
    while (temp->next != head)
    {
        printf("\nthe data of %dth node is %d \n", i, temp->data);
        printf("\nprevious : %u \n next : %u\n", temp->previous, temp->next);
        temp = temp->next;
        i++;
    }
    printf("\nthe data of %dth node is %d \n", i, temp->data);
    printf("\nprevious : %u \n next : %u\n", temp->previous, temp->next);
}
void addstart()
{
    node();
    newnode->next = head;
    newnode->previous = tail;
    head->previous = newnode;
    tail->next = newnode;
    head = newnode;
}
void endadd()
{
    node();
    newnode->previous = tail;
    newnode->next = head;
    tail->next = newnode;
    head->previous = newnode;
    tail = newnode;
}
void spladd()
{
    temp = head;
    int pos;
    printf("enter the value of the pos");
    scanf("%d", &pos);
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    node();
    newnode->previous = temp;
    newnode->next = temp->next;
    temp->next->previous = newnode;
    temp->next = newnode;
}
void srtdlt()
{
    temp = head;
    head = head->next;
    head->previous = tail;
    free(temp);
}
void lastdlt()
{
    temp = tail->previous;
    temp->next = head;
    free(tail);
    tail = temp;
}
void spldlt()
{
    temp = head;
    int pos;
    printf("enter the value of the pos");
    scanf("%d", &pos);
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    temp->previous->next = temp->next;
    temp->next->previous = temp->previous;
}
int main()
{
    head = 0;
    int choice;
    printf("let's create the doubly linklist :\n");
    do
    {
        create();
        printf("enter your choice :\n 1 : to create a new node !!\n 0 : exit !!");
        scanf("%d", &choice);
        if (choice == 0)
        {
            display();
        }

    } while (choice);
    printf("\n----------------------********************--------------------------\n");
    int a;
    printf("enter the choice what you want do : \n 1 : add a new node in the starting !! \n 2 :  add a new node in the end !! \n 3 :  add a new node in the specific place !! \n 4 : delete the node at the starting !! \n 5 :delete the node at the ending !! \n 6 : delete the specific node  !!\n 7 : display !! ");
    printf("\n choice : ");
    scanf("%d", &a);
    do
    {
        switch (a)
        {
        case 1:
            addstart();
            break;
        case 2:
            endadd();
            break;
        case 3:
            spladd();
            break;
        case 4:
            srtdlt();
            break;
        case 5:
            lastdlt();
            break;
        case 6:
            spldlt();
            break;
        case 7:
            display();
            break;
        default:
            printf("\nenter a valid option\n");
            break;
        }
        printf("enter the choice what you want do : \n 1 : add a new node in the starting !! \n 2 :  add a new node in the end !! \n 3 :  add a new node in the specific place !! \n 4 : delete the node at the starting !! \n 5 :delete the node at the ending !! \n 6 : delete the specific node  !!\n 7 : display !! ");
        printf("\n choice : ");
        scanf("%d", &a);
    } while (1);
    return 0;
}