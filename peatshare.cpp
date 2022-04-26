#include <bits/stdc++.h>
using namespace std;

const int MxN = 100010;
int dp[MxN];

void solution()
{
    int n;
    cin >> n;
    for(int i=1 ; i<=n; i++)
    {
        cin >> dp[i];
        dp[i] += dp[i-1];
    }
    if(dp[n] % 2)
    {
        cout << "NO";
        return;
    }
    int middle = dp[n]/2;
    for(int i=1; i<=n; i++)
    {
        if(dp[i] == middle)
        {
            cout << i;
            return;
        }
    }
    for(int i=0; i<n; i++)
    {
        int idx = lower_bound(dp+1, dp+n+1,middle + dp[i]) - dp;
        if(dp[idx] == middle + dp[i])
        {
            cout << i << " " << idx;
            return;
        }
    }
    cout << "NO";
    return;
}

int main()
{
    int q;
    cin >> q;
    while(q--){
        solution();
        cout << "\n";
    }
    return 0;
}
