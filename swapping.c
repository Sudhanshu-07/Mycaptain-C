#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter First number:\n");
    scanf("%d",&a);
    printf("Enter Second number:\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After SWAPPING:\nFirst=%d\nSecond=%d",a,b);
    return 0;
}
