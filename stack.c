#include<stdio.h>
void push();
void pop();
void display();
int top=-1,stack[100],n;
void main()
{
    int ch;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    while(1)
    {
        printf("\n\tStack implementations\n");
        printf("\n\t1.Push\t2.Pop\t3.Display");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
                   break;
            default:printf("\nWrong choice");
        }
    }
}
    void push()
    {
        int val;
        if(top>=n-1)
        {
            printf("\nStack is full.");
        }
        else
        {
            printf("\nEnter the element to push:");
            scanf("%d",&val);
            top=top+1;
            stack[top]=val;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            printf("\nStack is empty");
        }
        else
        {
            printf("\nThe deleted element is :%d",stack[top]);
            top=top-1;
        }
    }
    void display()
    {
        int i;
        if(top==-1)
        {
            printf("\nStack is empty");
        }
        else
        {
            printf("\nStack is: ");
            for(i=top;i>=0;i--)
            {
                printf("%d\t",stack[i]);
            }
        }
    }
