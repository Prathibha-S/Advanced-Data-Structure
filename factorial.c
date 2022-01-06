#include<stdio.h>
void main()
{
    int m,factorial;
    int fact(int n);
    printf("Enter a number:");
    scanf("%d",&m);
    factorial=fact(m);
    printf("Factorial is %d",factorial);
}
int fact(int n)
{
    int f=1;
    if(n==1)
        return 1;
    else
        f=n*fact(n-1);
    return(f);
}
