#include<stdio.h>
#include<stdlib.h>

struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root=NULL,*temp=NULL,*t1,*t2;

void create();
void insert();
void search(struct btnode *t);
void search1(struct btnode *t,int data);
void inorder((struct btnode *t);
void delete();
void delete1();
int smallest(btnode *t);

void main()
{

    int ch;
    printf("OPERATIONS ON BST");
    printf("\nInsert an element into tree\n");
    printf("\nDelete an element from the tree\n");
    printf("\nInorder Traversal\n");
    printf("4-Exit\n");
    while(1)
    {
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:inorder(root);
            break;
            case 4:exit(0);
            break;
            default:
            printf("Wrong choice,please enter correct choice.");
            break;
        }
    }
}
void insert()
{
    create();
    if(root==NULL)
        root=temp
    else
        search(root);
}
void create()
{
    int data;
    printf("\n Enter the data to be inserted:");
    scanf("%d",&data);
    temp=(struct btnode*)malloc(1* sizeof(struct btnode));
    temp->value=data;
    temp->l=temp->r=NULL;
}
void search(struct btnode *t)
{
if ((temp->value>t->value)&&(t->r!=NULL))
{
    search(t->r);
}
else if((temp->value>t->value)&&(t->r==NULL))
{
    t->r=temp;
}
else if((temp->value<t->value)&&(t->l!=NULL))
{
    search(t->l);
}
else if((temp->value<t->value)&&(t->l==NULL))
{
    t->l=temp;
}
}
void inorder(struct btnode *t)
{
    if(root==NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if(t->l!=NULL)
    {
        inorder(t->l);
    }
        printf("%d->",t->value);
    if(t->r!=NULL)
    {
        inorder(t->r);
    }
}
void delete()
{
    int data;
    if(root==NULL)
    {
        printf("\nNo elements in tree to delete");
        return;
    }
    printf("\nEnter the data to be deleted: ");
    scanf("%d",&data);
    search1(root,data);
}
void search1(struct btnode *t, int data)
{

if ((data&gt;t-&gt;value))
{
t1 = t;
search1(t-&gt;r, data);
}
else if ((data &lt; t-&gt;value))
{
t1 = t;
search1(t-&gt;l, data);
}
else if ((data==t-&gt;value))
{
delete1(t);
}
}

