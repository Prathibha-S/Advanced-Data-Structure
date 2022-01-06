#include<stdio.h>
void main()
float a,b;
char op;
printf("Enter two operands: ");
scanf("%f%f",&a,&b);
printf("Enter the operator: ");
scanf("%c",&op);
switch(op)
{
case '+':printf("%f + %f = %f",a,b,a+b);
    break;
case '-':printf("%f - %f = %f",a,b,a-b);
    break;
case '*':printf("%f * %f = %f",a,b,a*b);
    break;
case '/':printf("%f / %f = %f",a,b,a/b);
    break;
default:
    printf("The operator is not correct");
}
