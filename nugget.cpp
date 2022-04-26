#include <bits/stdc++.h>
using namespace std;

const int MxN = 110;
const int nugget[] = {6,9,20};
int dp[MxN];

int main()
{
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    int n,printed = 0;
    cin >> n;
    dp[0] = 1;
    for(int i=6; i<=n; i++)
    {
        int ok = 0;
        for(int j=0; j<3; j++)
        {
            if(i-nugget[j] < 0)
                continue;
            ok |= dp[i-nugget[j]];
        }

        dp[i] = ok;
        if(ok)
        {
            cout << i << "\n";
            printed = 1;
        }
    }
    if(!printed)
    {
        cout << "no";
    }
    return 0;
}
