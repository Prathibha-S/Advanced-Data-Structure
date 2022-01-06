#include<stdio.h>
void main()
{
    int a[20],i,n;
    void sum(int a[],int n);
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    printf("\nEnter elements to the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,n);
}
void sum(int a[],int n)
{

    int i,add=0;
    for(i=0;i<n;i++)
    {

        add=add+a[i];
    }
    printf("\nSum=%d",add);
}
