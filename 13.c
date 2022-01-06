#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter the three numbers");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        printf("%d is the largest number",x);
    }
    else if(y>z)
    {
        printf("%d is the largest number",y);
    }
    else
    {
        printf("%d is the largest number",z);
    }
}
