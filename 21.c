#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The no.of digits in the number is: %d",count);
}
