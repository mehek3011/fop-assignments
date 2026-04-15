#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n],even[n],odd[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Partitioned List:\n");
    for(i=0,j=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
    }
    for(i=0;i<j;i++)    {
        printf("%d ",even[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}
    