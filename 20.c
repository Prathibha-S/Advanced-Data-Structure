#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The multiplication table of %d is:\n ",n);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,i*n);
    }
}
