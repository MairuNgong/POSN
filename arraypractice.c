#include <stdio.h>

int a[2000];

int main()
{
    int n,i,k,cnt = 0;;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
        if(a[i] == k) cnt++;
    printf("%d",cnt);
    return 0;
}
