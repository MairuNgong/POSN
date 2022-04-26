#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[200];

int main()
{
    int n=0,s=0,w=0,e=0,i,j,len,k,now;
    scanf(" %s",a);
    scanf("%d",&k);
    len = strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='N') n++;
        else if(a[i]=='S') s++;
        else if(a[i]=='W') w++;
        else if(a[i]=='E') e++;
    }
    now = abs(n-s) + abs(e-w);
    if(n>=s)
    {
        if(s>=k) now+=k,k=0;
        else now+=s,k-=s;
    }
    else
    {
        if(n>=k) now+=k,k=0;
        else now+=n,k-=n;
    }
    if(e>=w)
    {
        if(w>=k) now+=k,k=0;
        else now+=w,k-=w;
    }
    else
    {
        if(e>=k) now+=k,k=0;
        else now+=e,k-=e;
    }
    printf("%d",(now-k)*2);
    return 0;
}

