#include<stdio.h>
#include<math.h>
void main()
{
    int n,c,fact=1;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    printf("\nSquare: %d",n*n);
    printf("\nSquare root: %f",sqrt(n));
    printf("\ncube: %d",n*n*n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        printf("\nIt is a prime number.");
    }
    else
    {
       printf("\nIt is not a prime number.");
    }

    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nFactorial:%d",fact);
    }