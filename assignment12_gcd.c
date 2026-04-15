#include <stdio.h>

int main() {
    int num1, num2;
    int i, gcd, smallestDivisor = -1;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    //smallest common divisor
    for(i = 2; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            smallestDivisor = i;
            break;
        }
    }

    if(smallestDivisor != -1)
        printf("Smallest common divisor (other than 1): %d\n", smallestDivisor);
    else
        printf("No common divisor other than 1.\n");

    //GCD 
    for(i = 1; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    
    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}