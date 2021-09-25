#include<stdio.h>
#include<stdlib.h>

struct details
{
     char name[30];
     int age;
    long phone;
     int salary;
}emp[5];

void display(int r)
{
     int i;
     printf("Name\tAge\tPhone Number\tSalary\n");
     for(i=0;i<r;i++)
     {
          printf("%s\t%d\t%ld\t%d\n",emp[i].name,emp[i].age,emp[i].phone,emp[i].salary);
     }
}

int main()
{
     int n,i;
     printf("Nuber of employees=");
     scanf("\n %d",&n);
     for(i=0;i<n;i++)
     {
          printf("\nEnter Details of Employee-%d\n",i+1);
          printf("\nName of Employee : ");
          scanf("%s",emp[i].name);
          printf("Employee Age       : ");
          scanf("%d",&emp[i].age);
          printf("Phone Number       : ");
          scanf("%d",&emp[i].phone);
          printf("Salary             : ");
          scanf("%d",&emp[i].salary);
     }

     display(n);
     return 0;
}
