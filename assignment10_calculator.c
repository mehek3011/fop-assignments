#include<stdio.h>
#include<math.h>
   
    int main()
    {
        int choice;
        float a,b;
        int x,y,n,i;
        double power;
        printf("\n1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Division");
        printf("\n5.Power");
        printf("\n6.Factoral");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
            printf("\nEnter two numbers: ");
            scanf("%f %f",&a,&b);
            printf("Result:%f",a+b);
            break;
            case 2:
            printf("\nEnter two numbers: ");
            scanf("%f %f",&a,&b);
            printf("Result:%f",a-b);
            break;
            case 3:
            printf("\nEnter two numbers: ");
            scanf("%f %f",&a,&b);
            printf("Result:%f",a*b);
            break;
            case 4:
            printf("\nEnter two numbers: ");
            scanf("%f %f",&a,&b);
            printf("Result:%f",a/b);
            break;
            case 5:
            printf("Enter x and y: ");
            scanf("%d %d",&x,&y);
            power=pow(x,y);
            printf("Result:%lf",power);
            break;
            case 6:
            printf("\nEnter a number: ");
            scanf("%d",&n);
            int fact=1;
            for(i=1;i<=n;i++)
            {
                fact=fact*i;
            }
            printf("Result=%d",fact);
            break;
            default: printf("Invalid choice");
        }
        return 0;
    }