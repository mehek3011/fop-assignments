#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    //program to generate random numbers

    int n,i;
    printf("Enter the number of random numbers to generate: ");
    scanf("%d",&n);
    srand(time(0)); //seed the random number generator with current time
    printf("Generated random numbers:\n");
    for(i=0;i<n;i++){
        int random_num=rand(); //generate a random number
        printf("%d\n",random_num);
    }
}