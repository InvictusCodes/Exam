WAP to read the structure for 05 employees and diplay them.
Code:
#include<stdio.h>
#include<string.h>
struct Employee
{
    int code;
    char name[30];
    float sal;
    char desg[30];
}emp[5];

int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the details of Employee %d\n",i+1);
        printf("Enter Employee Code:\n");
        scanf("%d",&emp[i].code);
        printf("Enter Employee Name:\n");
        scanf("%s",&emp[i].name);
        printf("Enter Employee salary:\n");
        scanf("%f",&emp[i].sal);
        printf("Enter Employee Designation:\n");
        scanf("%s",&emp[i].desg);
    }
    printf("The Details of 5 Employees are as Follows:");
    printf("\nEmployee Code\t Employee Name\t Employee Salary\t Employee Designation\t");
    for(i=0;i<5;i++){
    printf("\n%d\t\t %s\t\t %f\t\t %s",emp[i].code,emp[i].name,emp[i].sal,emp[i].desg);
    }
    return 0;
}
