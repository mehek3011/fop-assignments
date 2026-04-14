#include<stdio.h>
int fact(int num) {
    if(num==0)
    return 1;
    else
    return num*fact(num-1);
}       
void main() {
    int n,f=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nFactorial without using loop:");
    printf("%d",fact(n));
    printf("\nFactorial using loop:");
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("\n%d",f);
}