#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    int mark[3];
    int total;
}s[20];
void main()
{
    int n,i,j;
    printf("\nEnter the no.of students: ");
    scanf("%d",&n);
    printf("\nEnter the details of the student: ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter the roll no: ");
        scanf("%d",&s[i].roll_no);
        printf("Enter the name: ");
        scanf("%s",&s[i].name);
    printf("\nEnter the marks of three subjects: ");
    for(j=0;j<3;j++)
    {
        scanf("%d",&s[i].mark[j]);
        s[i].total=s[i].total+s[i].mark[j];
    }
    printf("Rollno=%d, Total=%d",s[i].roll_no,s[i].total);
    }
}
