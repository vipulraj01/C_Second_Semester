#include<stdio.h>
int main()
{
    float a[10],sum=0,avg;
    int n,i;
    printf("enter the no of elements = ");
    scanf("%d",&n);
    printf("\nenter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("average=%.2f",avg);
    return 0;
}