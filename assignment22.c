#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str1[100],str2[100],temp;
    int choice,length,i;

    
        printf("-----String operation menu----");
        printf("\n1. Length of the string.");
        printf("\n2. Copy the string.");
        printf("\n3. Concatenate the string.");
        printf("\n4. Compare.");
        printf("\n5. Reverse the string.");
        printf("\n6. exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        getchar();

        switch(choice)  
        {
            case 1:
            printf("\nEnter a string:");
            scanf("%s",str1);
            printf("\nLength of the string is %zu",strlen(str1));
            break;

            case 2:
            printf("\nEnter source string:");
            scanf("%s",str1);
            strcpy(str2,str1);
            printf("\nThe copied string is: %s",str2);
            break;

            case 3:
            printf("\nEnter first string:");
            scanf("%s",str1);
            printf("\nEnter second string:");
            scanf("%s",str2);
            strcat(str1,str2);
            printf("\nThe concatenated string is: %s",str1);
            break;

            case 4:
            printf("\nEnter first string:");
            scanf("%s",str1);
            printf("\nEnter second string:");
            scanf("%s",str2);
            if(strcmp(str1,str2)==0)
            {
                printf("\nBoth strings are equal.");
            }
            else
            {
                printf("\nBoth strings entered are not equal.");
            }
            break;

            case 5:
            printf("\nEnter a string:");
            scanf("%s",str1);
            length=strlen(str1);
            for(i = 0; i < length / 2; i++)
             {
                temp = str1[i];
                str1[i] = str1[length - i - 1];
                str1[length - i - 1] = temp;
            }
            printf("\nThe reversed string is: %s",str1);
            break;
         } 
     
     return 0;
}