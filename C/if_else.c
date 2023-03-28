#include<stdio.h>
int main()
{
    int choice,a,b,sum,sub,mul;
    printf("Press 1 for add\nPress 2 for sub\nPress 3 for mul\n");
    printf("Enter your Choice : ");
    scanf("%d",&choice);
    printf("Enter Inputs a and b : ");
    scanf("%d%d",&a,&b);
    if (choice == 1)
    {
        sum = a+b;
        printf("Sum = %d",sum);
    }
    else if (choice == 2)
    {
        sum == a-b;
        printf("sub = %d",sub);
    }
    else if (choice == 3)
    {
        mul = a*b;
        printf("mul=%d",mul);
    }
    else
    printf("Invalid Choice");
    return 0;
}   