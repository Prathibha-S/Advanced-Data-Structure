#include<stdio.h>
void main()
{
    int a,b,q,r;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    q=a/b;
    printf("The quotient is %d",q);
    r=a%b;;
    printf("\nThe remainder is %d",r);
}
