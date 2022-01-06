#include<stdio.h>
void main()
{
    int x,y,temp;
    printf("Enter the first number x ");
    scanf("%d",&x);
    printf("Enter the second number y ");
    scanf("%d",&y);
    temp=x;
    x=y;
    y=temp;
    printf("After swap,x=%d",x);
    printf("After swap,y=%d",y);
}
