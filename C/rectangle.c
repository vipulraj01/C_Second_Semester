#include<stdio.h>
int main()
{
    int length,breath,area;
    printf("enter the value of length and breath= ");
    scanf("%d%d",&length,&breath);
    area=length*breath;
    printf("The area of %d+%d=%d",length,breath,area);
    return 0;

}