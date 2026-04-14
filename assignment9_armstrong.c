#include<stdio.h>
void main()
{
    int num,x,ans,og;
    printf("Enter a number: ");
    scanf("%d",&num);
    ans=0;
    og=num;
    while(num!=0)
    {
        x=num%10;
        num=num/10;
        ans=ans+x*x*x;
    }
    if(ans==og)
    {
        printf("The number is an armstrong number");
    }
    else{
        printf("The number is not an armstrong number");
    }
}