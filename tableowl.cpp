#include <bits/stdc++.h>
using namespace std;

const int MxN = 505;
int dp[MxN][MxN];

int main()
{
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    int n,m;
    cin >> n >> m;
    memset(dp, 63, sizeof dp);
    for(int i=1; i<=n ;i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> dp[i][j];
        }
    }
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            dp[i][j]+=min({dp[i-1][j-1], dp[i-1][j], dp[i-1][j+1]});
        }
    }
    int answer = 1e9 + 100;
    for(int j=1; j<=m; j++)
    {
        answer = min(answer, dp[n][j]);
    }
    cout << answer;
    return 0;
}
