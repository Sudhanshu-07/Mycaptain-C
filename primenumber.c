#include<stdio.h>

int main()
{
    int num,i,flag=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number",num);
            flag=1;
            break;
        }
    }
        if(flag==0)
        printf("%d is a prime number",num);
    return 0;
}
