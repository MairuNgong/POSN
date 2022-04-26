#include <bits/stdc++.h>
using namespace std;

const int MxN = 1010;
int dp[MxN][MxN];

int main()
{
    int n,m,q;
    cin >> m >> n >> q;
    while(q--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        dp[b][a] ^= 1;
        dp[y+1][a] ^= 1;
        dp[b][x+1] ^= 1;
        dp[y+1][x+1] ^= 1;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            dp[i][j] ^= dp[i-1][j] ^ dp[i][j-1] ^ dp[i-1][j-1];
            cout << dp[i][j];
        }
        cout << "\n";
    }

    return 0;
}
