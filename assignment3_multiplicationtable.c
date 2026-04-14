#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number for which the table is to be displayed:");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        printf("\n%d",n*i);
    }
}