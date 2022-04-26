#include <stdio.h>
#include <math.h>
int a[100000000];
void play(int n)
{
    int i,cnt = 0;
    for(i=2;i*i<=n;i++){
        if(n%i==0)
            while(n%i==0)
            {
                a[cnt] = i;
                cnt++;
                n = n/i;
            }
    }
    if(n!=1) a[cnt++] = n;
    for(i=0;i<cnt-1;i++)
        printf("%d x ",a[i]);
    printf("%d",a[i]);
    return;
}


int main()
{
    int q,n,i;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        play(n);
        printf("\n");

    }
    return 0;
}

