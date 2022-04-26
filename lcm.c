#include <stdio.h>

long long gcd(long long a,long long b){
    if(a%b == 0) return b;
    return gcd(b,a%b);
}
int main()
{
    long long i,n,ans,num;
    scanf("%lld%lld",&n,&ans);
    for(i=0;i<n-1;i++){
        scanf("%lld",&num);
        ans = num*ans/gcd(num,ans);
    }
    printf("%lld\n",ans);
    return 0;
}
