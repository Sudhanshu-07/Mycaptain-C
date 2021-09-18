#include<stdio.h>
int lcm(int x,int y)
{
    static int i=0;
    i=i+y;
    if(i%x==0 && i%y==0)
    {
        return i;
    }
    return lcm(x,y);
}

int main()
{
    int n1,n2,res;
    printf("Enter the first number:\n");
    scanf("%d",&n1);
    printf("Enter the second number:\n");
    scanf("%d",&n2);
    printf("The LCM of %d and %d is:\n%d",n1,n2,lcm(n1,n2));
    return 0;
}
