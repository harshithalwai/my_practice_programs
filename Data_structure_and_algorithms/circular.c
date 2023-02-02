#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp, *tail, *pre;
void node()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data of the link list : ");
    scanf("%d", &newnode->data);
    printf("your data stored at %u \n", &newnode->next);
    newnode->next = 0;
}
void create()
{
    node();
    if (head == 0)
    {
        head = temp = newnode;
        tail = newnode;
    }
    else
    {
        temp->next = newnode; // if they are not pointer then we use "temp.next=newnode;"
        temp = newnode;
        tail = newnode;
    }
    temp->next = head;
}
void display()
{
    temp = head;
    int i = 1;
    while (temp->next != head)
    {
        printf("the data of linklist of %d node at address %u is : %d\n", i, temp, temp->data);
        temp = temp->next;
        i++;
    }
    printf("the data of linklist of %d node at address %u is : %d\n", i, temp, temp->data);
}
void startadd()
{
    node();
    newnode->next = head;
    head = newnode;
    tail->next = head;
}
void endadd()
{
    node();
    tail->next = newnode;
    newnode->next = head;
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
    newnode->next = temp->next;
    temp->next = newnode;
}
void srtdlt()
{
    temp = head;
    head = temp->next;
    tail->next = head;
    free(temp);
}
void lastdlt()
{
    temp = head;
    while (temp->next != head)
    {
        pre = temp;
        temp = temp->next;
    }
    pre->next = head;
    free(temp);
}
void spldlt()
{
    temp = head;
    int pos;
    printf("enter the value of the pos");
    scanf("%d", &pos);
    for (int i = 1; i < pos; i++)
    {
        pre = temp;
        temp = temp->next;
    }
    pre->next = temp->next;
    free(temp);
}
int main()
{
    head = 0;
    int choice;
    printf("let's create the linklist :\n");
    do
    {
        create();
        printf("do you want to create a new node : 1 = yes && 0 =no  : ");
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
            startadd();
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