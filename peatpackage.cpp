#include <bits/stdc++.h>
using namespace std;

const int MxN = 1e5 + 10;
int w[MxN], c[MxN], types[MxN];
int n,k,it;

bool ok(int x)
{
    int sum = 0, cnt_boxes = 1;
    for(int i=1; i<=n;i++)
    {
        sum += w[i];
        if(sum > x || types[c[i]] == it)
        {
            cnt_boxes++, it++;
            sum = w[i];
        }
        types[c[i]] = it;
    }
    return cnt_boxes <= k;

}

void solution()
{
    memset(types, 0,sizeof types);
    cin >> n >> k;
    int maxx = -1, sum = 0;
    bool _ok = true;
    for(int i=1; i<=n;i++)
    {
        cin >> w[i] >> c[i];
        maxx = max(w[i],maxx);
        sum += w[i];
        types[c[i]]++;
        if(types[c[i]] > k)
        {
            _ok = false;
        }
    }
    if(!_ok)
    {
        cout << "-1";
        return;
    }
    memset(types,0,sizeof types);
    int l = maxx, r = sum +1;
    while(l < r)
    {
        int mid  = (l+r)/2;
        ++it;
        if(ok(mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    if(l >  sum)
        cout << "-1";
    else
        cout << l;
    return ;
}

int main()
{
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    int q;
    cin >> q;
    while(q--){
        solution();
        cout << "\n";
    }
    return 0;
}
