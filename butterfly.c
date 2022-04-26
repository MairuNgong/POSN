#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++)
            printf("*");
        for(j=n-1;j>=i;j--)
            printf("-");
        for(j=n-2;j>=i;j--)
            printf("-");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<=2*n-1;i++) printf("*");
    printf("\n");
    for(i=1;i<n;i++){
        for(j=n-1;j>=i;j--)
            printf("*");
        for(j=1;j<=i;j++)
            printf("-");
        for(j=1;j<i;j++)
            printf("-");
        for(j=n-1;j>=i;j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
