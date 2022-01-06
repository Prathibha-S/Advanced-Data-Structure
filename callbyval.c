#include<stdio.h>
void main()
{
    int a=10,b=15,c=100,d=150;
    void swap1(int a,int b);
    void swap2(int *c,int *d);
    printf("Before function call, a=%d b=%d",a,b);
    swap1(a,b);
    printf("\nAfter function call,a=%d b=%d",a,b);
    printf("\nBefore function call, c=%d d=%d",c,d);
    swap2(&c,&d);
    printf("\nAfter function call,c=%d d=%d",c,d);
}
void swap1(int x,int y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    printf("\nInside function swap1 x=%d y=%d",x,y);
}
void swap2(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nInside function swap2 x=%d y=%d",*x,*y);
}
