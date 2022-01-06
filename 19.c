#include<stdio.h>
void main()
{
    int i=1,fact=1,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i=i+1;
    }
    printf("The factorial is %d",fact);
}
