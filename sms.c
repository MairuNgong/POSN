#include <stdio.h>
#include <math.h>
char a[20][20]={"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"},ans[100];
int n=0;
void play(int k,int t)
{
    if(k==1)
    {
        while(t--)
            if(n>0)
                n--;
        return;
    }
    if(k==7||k==9)
        ans[n++]=a[k-2][(t-1)%4];
    else
        ans[n++]=a[k-2][(t-1)%3];
    return;
}
int main()
{
    int i,k,q,t,v,h;
    scanf("%d",&q);
    q--;
    scanf("%d %d",&k,&t);
    play(k,t);
    while(q--)
    {
        scanf("%d %d %d",&h,&v,&t);
        k=k+h+(v*3);
        play(k,t);
    }
    for(i=0;i<n;i++)
        printf("%c",ans[i]);
    if(n==0)
        printf("null");

    return 0;
}
