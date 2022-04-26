#include <bits/stdc++.h>
using namespace std;
long long a[1000100];

int main()
{
    long long A,B,n,i,mid,sum,l,r;
    scanf("%lld%lld",&A,&B);
    for(i=0;i<A;i++)
        scanf("%lld",&a[i]);
    l = 0, r = 2000000000;
    while(l<r)
    {
        mid = (l+r+1)/2;
        for(i=0,sum=0;i<A;i++)
            if(mid<a[i])
                sum+=(a[i]-mid);
        if(sum>=B)
            l=mid;
        else
            r=mid-1;
    }
    printf("%lld\n",l);

    return 0;
}
