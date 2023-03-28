#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int L,W,H,N,i;
    scanf("%d",&L);
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d%d",&W,&H);
        if(W<L || H<L)
            printf("UPLOAD ANOTHER\n");
        else if(W==H)
            printf("ACCEPTED\n");
        else
            printf("CROP IT\n");
    }
    
    return 0;
}
