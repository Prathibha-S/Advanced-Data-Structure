#include<stdio.h>
void main()
{
void insert_beg();
void insert_mid();
void insert_end();
void delete_beg();
void delete_mid();
void delete_end();
void sort();
void search();
{
    int a[50],i,n,ch;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements to the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    while(ch>0)
    {
      printf("\n MENU DRIVEN \n");
      printf("\n 1.To insert an element at the beginning.");
      printf("\n 2.To insert an element at middle.");
      printf("\n 3.To insert an element at the end");
      printf("\n 4.To delete an element at the beginning.");
      printf("\n 5.To delete an element at middle.");
      printf("\n 6.To delete an element at the end");
      printf("\n 7.To display the elements.");
      printf("\n 8.To sort an array.");
      printf("\n 9.To search an element.");
      printf("\n Enter your choice:");
      scanf("%d",&ch);
    }
    switch(ch)
    {
        case 1:insert_beg();
               break;
        case 2:insert_mid();
               break;
        case 3:insert_end();
               break;
        case 4:delete_beg();
               break;
        case 5:delete_mid();
               break;
        case 6:delete_end();
               break;
        case 7:display();
               break;
        case 8:sort();
               break;
        case 9:search();
               break;
    }
}
}
void insert_beg()
{
    int a[50],n,i,k;
    printf("\n Enter the element to be inserted at the beginning.");
    scanf("%d",&k);
    for(i=n-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=k;
    n=n+1;
}
void insert_mid()
{
    int a[50],n,i,k,pos;
    printf("\nEnter the element to be inserted at middle.");
    scanf("%d",&k);
    printf("\nEnter the position of element:");
    scanf("%d",&pos);
    if(pos>0)
    {
        for(i=0;i<pos;i--)
        {
            a[i]=a[i+1];
        }
        a[pos]=k;
        for(i=0;i<n;i++)
        {
            printf("%d",&a[i]);
        }
    }
    else
    {
        printf("\n You entered invalid position");
    }
void insert_end()
{
    int n,i,k;
    printf("\n Enter the element to be inserted:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        a[i+1]=a[i];

    }
    a[i+1]=k;
    n=n+1;
}
void delete_beg()
{

}
void delete_mid()
{

}
void delete_end()
{

}
void display()
{
int i;
    if(n>0)
    {
        printf("\nArray elements are: ");
        for(i=0; i<n;i++)
        printf("%d\t ", a[i]);

    }
    else
    {
        printf("\nNo elements to display");
        return;
    }
}
void sort()
{

}
void search()
{

}

}

