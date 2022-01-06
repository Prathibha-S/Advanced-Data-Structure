#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the first number x: ");
    scanf("%d",&x);
    printf("Enter the second number y: ");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swap,x= %d",x);
    printf("\nAfter swap,y=%d",y);
}
