#include <stdio.h>

int main()
{
    int q,n,i,j;
    scanf("%d",&q);
    while(q--){
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i++){
        for(j=1;j<=2*n+1;j++){
            if(i==1||i==2*n+1||j==1||j==2*n+1) printf("*");
            else if(i%2==1 && i>=j) printf("*");
            else if(j%2==1 && j>=i) printf("*");
            else printf("-");
        }
        printf("\n");

    }
    }
    return 0;
}
