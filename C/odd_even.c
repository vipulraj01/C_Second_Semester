#include<stdio.h>
int main ()
{
    int i,counto=0,counte=0,n;
    printf("Enter value of n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        counte++;
        else
        counto++;
    }
    printf("Count of even numbers = %d\n",counte);
    printf("Count of odd numbers = %d\n",counto);
    return 0;
}