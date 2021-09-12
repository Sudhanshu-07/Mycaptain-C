#include<stdio.h>

int main()
{
    int item;
    printf("MENU!!!!.....\n");
    printf("1.French Fries, Rs 99\n2.Burger, Rs 129\n3.Sandwich, Rs 149\n4.Pasta, Rs 179\n5.Pizza, Rs 239\n");
    printf("Enter the Item number=\n");
    scanf("%d",&item);
    switch (item)
    {
        case 1:
        printf("Food Item-French Fries\nPrice-Rs 99");
        break;
        case 2:
        printf("Food Item-Burger\nPrice-Rs 129");
        break;
        case 3:
        printf("Food Item-Sandwich\nPrice-Rs 149");
        break;
        case 4:
        printf("Food Item-Pasta\nPrice-Rs 179");
        break;
        case 5:
        printf("Food Item-Pizza\nPrice-Rs 239");
        break;
    default:
    printf("Invalid Item Number\n");
        break;
    }
}
