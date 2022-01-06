#include<stdio.h>
void main()
{
    int n,sum,m;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("The sum of digits is: %d",sum);
}
