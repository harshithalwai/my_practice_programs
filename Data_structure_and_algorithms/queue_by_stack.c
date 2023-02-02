#include <stdio.h>
#define size 5
int top1 = -1, top2 = -1, count = 0;
int stack1[size], stack2[size];
void push1(int data1)
{
    if (top1 >= size - 1)
    {
        printf("queue is full !! ");
    }
    else
    {
        top1++;
        stack1[top1] = data1;
    }
}
int pop1()
{
    for (int i = 0; i < count; i++)
    {
        return stack1[top1--];
    }
}
int pop2()
{
    printf("deleted item is %d ", stack2[top2]);
    count--;
    return stack2[top2--];
}
void push2(int data2)
{
    if (top2 >= size - 1)
    {
        printf("queue is full !! ");
    }
    else
    {
        top2++;
        stack2[top2] = data2;
    }
}
void enqueue()
{
    int x;
    printf("enter the element of the queue");
    scanf("%d", &x);
    push1(x);
    count++;
}
int dequeue()
{
    int a;
    for (int i = 0; i < count; i++)
    {

        a = pop1();
        push2(a);
    }
}
int main()
{
for (int i = 0; i < 4; i++)
{
    enqueue();
}
dequeue();
for (int i = top1; i >=0; i--)
{
    printf("%d",stack1[top1]);
}

    return 0;
}