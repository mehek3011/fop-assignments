#include<stdio.h>
#include<string.h>

void main()
{
    char str1[20],str2[20],result[20];
    int i,original_length;

    printf("Enter the first string:");
    scanf("%s",str1);
    printf("Enter the second string:");
    scanf("%s",str2);

    //length
    original_length=strlen(str1);

    //reverse
    for(i=0;i<original_length;i++)
    {
        result[i]=str1[original_length-1-i];
    }

    //co,paring strings
    if(strcmp(str1,str2)==0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }

    result[original_length]='\0'; 

    printf("The reversed string is:%s",result);

    //pallindramo check
    if(strcmp(str1,result)==0)
    {
        printf("\nThe string is a palindrome.");
    }
    else
    {
        printf("\nThe string is not a palindrome.");
    }

    //substring
    if(strstr(str1,str2)!=NULL)
    {
        printf("\nThe second string is a substring of the first string.");
    }
    else
    {
        printf("\nThe second string is not a substring of the first string.");
    }
    
}