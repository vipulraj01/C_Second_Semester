#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m,p;
    scanf("%d",&n);
    p = 1;
    for(m=1;m<=n;m++)
    {
        p = p*m;
    }
    printf("%d",p);
    return 0;
}