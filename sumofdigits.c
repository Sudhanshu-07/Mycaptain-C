#include<stdio.h>

int sum_digits(int n)
{
    int rem,s;
    if(n!=0){
    rem=n%10;
    s=rem+sum_digits(n/10);
    return s;
    }
    else
    return 0;
}

int main()
{
    int num,sum;
    printf("Enter the number:\n");
    scanf("%d",&num);
    sum=sum_digits(num);
    printf("Sum of digits of %d:\n%d",num,sum);
    return 0;

}
