#include <stdio.h>
#include <stdlib.h>
int a[20],b[20],n,r,k,cnt=0;
void play(int state)
{
    int i;
    if(state==r)
    {
        cnt++;
        if(cnt == k)
        {
            for(i=0; i<r; i++)
                printf("%d ",b[i]);
            printf("\n");
            exit(0);
        }
    }
    for(i=1; i<=n; i++)
    {
        if(!a[i])
        {
            a[i] = 1;
            b[state] = i;
            play(state + 1);
            a[i] = 0;
        }
    }
}

int main()
{
    scanf("%d%d%d",&n,&r,&k);
    play(0);
    return 0;
}
