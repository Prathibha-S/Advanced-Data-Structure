#include<stdio.h>
#include<conio.h>
int n,cost[10][10];
void prims();
void main()
{
    int i,j;
    printf("enter the no of vertices: ");
    scanf("%d",&n);
    printf("enter the cost adjacency matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&cost[i][j]);
        }
    }
    prims();
    getch();
}

void prims()
{
    int i,j,k,l,x,near[10],tree[10][3],temp;
    int mincost=0;
    temp=cost[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(cost[i][j]<temp){
                temp=cost[i][j];
                k=i;
                l=j;
            }
        }
    }
    mincost=temp;
    tree[0][0]=k;
    tree[0][1]=l;
    tree[0][2]=temp;
    for(i=0;i<n;i++){
        if(cost[i][k]>cost[i][l]){
            near[i]=l;
        }
        else{
            near[i]=k;
        }
    }
    near[k]=100;
    near[l]=100;
    temp=101;
    for(i=1;i<n-1;i++){
        for(j=0;j<n;j++){
            if(near[j]!=100 && cost[j][near[j]]<temp){
                temp=cost[j][near[j]];
                x=j;
            }
        }
        tree[i][0]=x;
        tree[i][1]=near[x];
        tree[i][2]=temp;
        mincost=mincost+temp;

        int p;
        for(p=0;p<n;p++){
            if(near[p]!=100 && cost[p][near[p]]>cost[p][x]){
                near[p]=x;
            }
        }
        near[x]=100;
        temp=101;

    }
          printf("\nThe minimum cost spanning tree is:\n");
          for(i=0;i<n-1;i++){
            for(j=0;j<3;j++){
                printf("%d ",tree[i][j]);
            }
            printf("\n\n");
          }
printf("\nThe minimum cost:%d",mincost);
}
