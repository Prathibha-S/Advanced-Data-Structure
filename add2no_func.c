#include<stdio.h>
void main()
{
    int a,b,c;
    int sum(int,int);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("Sum=%d",c);
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return(z);
}
