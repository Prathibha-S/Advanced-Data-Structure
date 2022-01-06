#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>0)
    {
        printf("The given number is positive.");
    }
    else if(x<0)
    {
        printf("The given number is negative");
    }
    else
    {
        printf("The given number is zero");
    }

}
