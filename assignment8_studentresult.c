#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    float result,percent;
    printf("Enter marks in 5 subjects: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    result=(a+b+c+d+e)/5;
    printf("result:%f",result);
    if(result>=40)
    {
        printf("\nStatus:pass");
        if(result>=75)
        {
            printf("\nGrade:Distinction");
        }
        else if(result>=60 && result<75)
    {
        printf("\nGrade:First class");
    }
    else if(result>=50 && result<60)
    {
        printf("\nGrade:second division");
    }
    else if(result>=40 && result<50)
    {
        printf("\ngrade:third division");
    }
}
    else{
        printf("\nStatus:fail");
    }
}