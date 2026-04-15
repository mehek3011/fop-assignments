#include<stdio.h>
#include<string.h>

struct EMPLOYEE
{
    char Name[20];
    char Designation[100];
    char Gender[10];
    char DOJ[100];
    int Salary;
};

int main()
{
    char name[20],desig[100],gender[10],doj[100];
    int salary,n;

    printf("Enter the number of employees :");
    scanf("%d",&n);

    struct EMPLOYEE emp[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the name of employee %d:",i+1);
        scanf(" %s",name);
        printf("Enter the designation of employee %d:",i+1);
        scanf("%s",desig);
        printf("Enter the gender of employee %d:",i+1);
        scanf(" %s",gender);
        printf("Enter the date of joining of employee %d:",i+1);
        scanf(" %s",doj);
        printf("Enter the salary of employee %d:",i+1);
        scanf(" %d",&salary);

        strcpy(emp[i].Name,name);
        strcpy(emp[i].Designation,desig);
        strcpy(emp[i].Gender,gender);
        strcpy(emp[i].DOJ,doj);
        emp[i].Salary=salary;
    }

    int m_count=0,f_count=0,sal_count=0,y=0;
    char asstman_names[100][100];

    for(int i=0;i<n;i++)
    {
        if(strcmp(emp[i].Gender,"female"))
        {
            f_count++;
        }
        else 
        {
            m_count++;
        }
        
        if(emp[i].Salary>10000)
        {
            sal_count++;
        }

        if(strcmp(emp[i].Designation,"Asistantmanager")==0)
        {
            strcpy(asstman_names[y],emp[i].Name);
            y++;
        }
        
    }

    printf("Number of male employees:%d\n",m_count);
    printf("Number of female employees:%d\n",f_count);
    printf("Number of employees with salary greater than 10000:%d\n",sal_count);
    printf("Names of assistant managers:\n");
    
    for(int i=0;i<y;i++)
    {
        printf("%s\n",asstman_names[i]);
    }

    return 0;
}