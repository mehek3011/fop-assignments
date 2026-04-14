#include<stdio.h>
void main()
{
    float basicpay,hra,ta,grossSalary,protax,net;
    printf("Basic pay: ");
    scanf("%f",&basicpay);
    hra=0.10*basicpay;
    ta=0.2*basicpay;
    grossSalary=basicpay+hra+ta;
    protax=0.2*grossSalary;
    net=grossSalary-protax;
    printf("Grass salary: %f",grossSalary);
    printf("\nNet salary: %f",net);
}