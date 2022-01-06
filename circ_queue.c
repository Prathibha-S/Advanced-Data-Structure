#include<stdio.h>
void cenqueue();
void cdequeue();
void cdisplay();
int isfull();
int isempty();
int front=-1;
int rear=-1;
int size,x,items[50],i;
void main()
{
    int ch;
    printf("\nEnter the size of the elements:");
    scanf("%d",&size);
    do
    {
        printf("\nEnter the operations:\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:cenqueue();
               break;
        case 2:cdequeue();
               break;
        case 3:cdisplay();
               break;
        default:printf("\nInvalid operation.");
                break;
        }
    }
    while(ch<4);
}
    void cenqueue()
    {
        if(isfull()){
            printf("\nQueue is full");
        }
        else{
            if(front==-1)
                front=0;
                rear=(rear+1)%size;
                printf("\nEnter element:");
                scanf("%d",&x);
                items[rear]=x;
                printf("\nInserted element is %d",x);
        }
    }
    void cdequeue()
    {
        if(isempty())
        {
            printf("\nQueue is empty");
            return(-1);
        }
        else
        {
            x=items[front];
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
                front=(front+1)%size;
            }
            printf("\n Deleted element is %d",x);

        }
    }
   void cdisplay()
{
  int i;
  if (isempty())
    printf(" \n Empty Queue\n");
  else {
    for (i = front; i != rear; i = (i + 1) % size) {
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
  }
}
    int isfull()
    {
        if((front==rear+1)||(front==0&&rear==size-1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isempty()
    {
        if(front==-1)
            return 1;
        else
            return 0;
    }

