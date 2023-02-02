#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
}*root=0 ;
struct node *create()
{
    struct node* newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("If you dont want to make a new node enter -1 !!\n enter the data : ");
    scanf("%d", &newnode->data);
    if (newnode->data == -1)
    {
        return 0;
    }
    printf("\n enter the data of the left node :-\n");
    newnode->left = create();
    printf("\n enter the data of the right node :-\n");
    newnode->right = create();
    return newnode;
}
void postorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}
void preorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}
int main()
{
    root = create();
preorder(root);
printf("\n");
inorder(root);
printf("\n");
postorder(root);
    return 0;
}