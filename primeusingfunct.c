#include<stdio.h>
void main()
{
    int i, prime, n, j;

    printf("\nEnter Limit(N): ");
    scanf("%d", &n);
    printf("\nPrime numbers less than the given limit : \n\n");

    for(i=1; i<n; i++)
    {
        prime = 1;
        for(j=2; j<i; j++)
            if(i%j == 0)
            {
                prime = 0;
                break;
            }
        if(prime)
            printf(" %d ",i);
    }

    printf("\n");
    return 0;
}

