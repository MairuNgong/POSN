#include <bits/stdc++.h>
using namespace std;
int a[2222];
int main()
{
    int n,k,i,sum = 0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n,greater<int>());
    for(i=0;i<n;i+=k)
        sum+=a[i];
    printf("%d\n",sum);
    return 0;
}
