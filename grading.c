#include<stdio.h>
#include<stdlib.h>
int main()
{
        int num;
        printf("Enter the number=");
        scanf("%d",&num);
        if(num>=85 && num<=100)
        {
            printf("Grade A\n");
        }
        if(num>=70 && num<=84)
        {
            printf("Grade B\n");
        }
        if(num>=55 && num<=69)
        {
            printf("Grade C\n");
        }
        if(num>=40 && num<=54)
        {
            printf("Grade D\n");
        }
        if(num<40)
        {
            printf("GRade F\n");
        }
    return 0;
}
