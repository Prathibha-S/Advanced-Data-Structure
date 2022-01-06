#include<stdio.h>
void main()
{
    int i=0,n,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("The sum of natural numbers is: %d",sum);
}
