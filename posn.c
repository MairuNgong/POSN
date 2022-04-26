#include <stdio.h>

int main()
{
    int q,n,i,j;
    scanf("%d",&q);
    while(q--){
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            if((i==1 && j<=n)||j==1||(i==n/2+1 && j<=n)) printf("*");
            else if(i<n/2+1 && j==n) printf("*");
            else printf("-");
        }
        for(j=1;j<=n+1;j++)
        {
            if((i==1 && j<=n)||j==1||(i==n && j<=n)||j==n) printf("*");
            else printf("-");
        }
        for(j=1;j<=n+1;j++)
        {
            if((i==1 && j<=n)||(i==n && j<=n)||(i==n/2 + 1 && j<=n)) printf("*");
            else if(i<n/2+1 && j==1) printf("*");
            else if(i>n/2+1 && j==n) printf("*");
            else printf("-");
        }
        for(j=1;j<=n;j++)
        {
            if(j==1||j==n) printf("*");
            else if(i==j) printf("*");
            else printf("-");
        }
        printf("\n");
    }
    }

    return 0;
}
