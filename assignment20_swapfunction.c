#include<stdio.h>
void swapv(int a, int b);
void swapr(int *a, int *b);

void main()
{
    int num1,num2,temp,cho,a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    printf("\nBefore swapping the numbers are num1=%d and num2=%d",num1,num2);
    printf("\nEnter your choice from menu below:\n1.Swapping normally.\n2.Swapping using call by value.\nSwapping using call by reference.");
    scanf("%d",&cho);
    switch(cho)
    {
        case 1:
            temp=num1;
            num1=num2;
            num2=temp;
            printf("\nAfter swapping the numbers are num1=%d and num2=%d",num1,num2);
            break;
        case 2:
            swapv(num1,num2);
            break;
        case 3:
            swapr(&num1,&num2);
            printf("\nAfter swapping the numbers are num1=%d and num2=%d",num1,num2);
            break;      
    }
}  
void swapv(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping the numbers are num1=%d and num2=%d",a,b);
    
}
void swapr(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nAfter swapping the numbers are num1=%d and num2=%d",*a,*b);   
   
} 