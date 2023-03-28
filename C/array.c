#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("enter the no of elements = ");
    scanf("%d",&n);
    printf("\nenter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%u\n",a[i],&a[i]);
    }
    printf("%u\t%u",a,&a);
    return 0;
}