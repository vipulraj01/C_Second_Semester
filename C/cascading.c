#include<stdio.h>
void mul();
void addition();
int main()
{
    mul();
    addition();
    return 0;
}
    void mul()
{
    int a,b,m;
    printf("Enter the values for multiplication = ");
    scanf("%d%d",&a,&b);
    m = a*b;
    printf("The multiplication is %d \n",m);
}
    void addition()
{
    int a,b,c;
    printf("Enter the values for addition = ");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("The additon is %d",c);
}