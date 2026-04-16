#include<stdio.h>

void main()
{
    int A[2][2]={{1,2},{3,4}};
    int B[2][2]={{1,2},{3,4}};
    int add[2][2];
    int i,j;

    //adding two matrices
    printf("The addition of both the matrix is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            add[i][j]=A[i][j]+B[i][j];
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
   

    //calculating the Saddle point of a matrix
    int min1,max1,min2,max2;
    int a = A[0][0], b = A[0][1], c = A[1][0], d = A[1][1];
    min1 =(a<b)?a:b;
    max1 =(a>b)?a:b;
    min2 =(c<d)?c:d;
    max2 =(c>d)?c:d;

    if (min1==max1||min1==max2)
    {
        printf("\nThe saddle point is: %d",min1);
    }
    else if (min2==max1||min2==max2)
    {
        printf("\nThe saddle point is: %d",min2);
    }
    else
    {
        printf("\nThere is no saddle point in the matrix");
    }
    
    //calculating the inverse 
    int det = (A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
    if(det == 0)
    {
        printf("\nThe inverse of matrix does not exsist (Determinant is 0) \n");
    }
    else 
    {
        printf("\nThe inverse of matrix A is 1/%d * [%d %d; %d %d] \n",det,A[1][1],-A[0][1],-A[1][0],A[0][0]);

    }
    
    //Magic Square
    int r1 = A[0][0]+A[0][1];
    int r2 = A[1][0]+A[1][1];
    int c1 = A[0][0]+A[1][0];
    int c2 = A[0][1]+A[1][1];
    int d1 = A[0][0]+A[1][1];
    int d2 = A[0][1]+A[1][0];

    if (r1 == r2 && r2==c1 && c1 == c2 && c2 == d1 && d1 == d2)
    {
        printf("\nThe matrix is a magic square");
    }
    else
    {
        printf("\nThe matrix is not a magic square");
    }
}