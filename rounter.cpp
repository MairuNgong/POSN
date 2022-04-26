#include <bits/stdc++.h>
using namespace std;

const int MxN = 100100;
int a[MxN];
int n,m;

bool ok(int x)
{
    int cnt_router = 1, router_now = a[1] + x;
    for(int i=2; i<=m; i++)
    {
        if(router_now + x < a[i])
        {
            cnt_router++;
            router_now = a[i] + x;
        }
    }
    return cnt_router <= n;
}


int main()
{
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i=1; i<=m ;i++)
    {
        cin >> a[i];
        a[i] *= 10;
    }
    sort(a+1,a+m+1);
    int l = 0, r = 1e9 + 100;
    while(l<r)
    {
        int mid = (l+r)/2;
        if(ok(mid))
        {
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    cout << (l/10) << "." << (l%10);

    return 0;
}
