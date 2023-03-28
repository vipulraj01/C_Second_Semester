#include<stdio.h>
int main()
{
    int a,b;
    float div;
    printf("enter the value of a and b= ");
    scanf("%d%d",&a,&b);
    div=a/b;
    printf("The division of %d/%d=%f",a,b,div);
    return 0;
}