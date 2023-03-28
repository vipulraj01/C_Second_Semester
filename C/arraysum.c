#include<stdio.h>
int main ()
{
    int a[10],i,n,sum=0;
    printf("enter the no of elements = ");
    scanf("%d",&n);
    printf("\nenter the elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
    printf("sum=%d",sum);
    return 0;
}