#include <bits/stdc++.h>
using namespace std;
long long a[1000], b[1000];
int main()
{
    long long i,n,sum = 0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
        scanf("%lld",&b[i]);
    sort(a,a+n);
    sort(b,b+n,greater<long long>());
    for(i=0;i<n;i++)
        sum+=a[i]*b[i];
    printf("%lld\n",sum);
    return 0;
}
