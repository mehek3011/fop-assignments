#include<stdio.h>
void main()
{
    int a,b,choice;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\nEnter 1 for addition");
    printf("\nEnter 2 for subtraction");
    printf("\nEnter 3 for multiplication");
    printf("\nEnter 4 for division");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
        printf("Addition:%d",a+b);
        break;
        case 2:
        printf("Subtraction:%d",a-b);
        break;
        case 3:
        printf("Multiplication:%d",a*b);
        break;
        case 4:
        printf("Division:%d",a/b);
        break;
        default:
        printf("Wrong choice");
    }
}