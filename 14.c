#include<stdio.h>
void main()
{
    float a,b,c,d,r1,r2;
    printf("Enter the coefficient of a,b and c: ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=-b+sqrt(d)/(2*a);
        r2=-b-sqrt(d)/(2*a);
        printf("\n Value of root1=%f and value of root2=%f",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("\n Value of root1=%f and value of root2=%f",r1,r2);
    }
    else
    {
        printf("\n Roots are imaginary");
    }
}
