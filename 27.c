#include<stdio.h>
void main()
{
    int i,s,n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        s=s+i;
    }
    printf("The sum of all natural numbers upto %d is %d",n,s);
}
