#include<stdio.h>
void main()
{
    int a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
    {
        printf("%c is an alphabet",a);
    }
    else
    {
        printf("The given character is not an alphabet");
    }
}
