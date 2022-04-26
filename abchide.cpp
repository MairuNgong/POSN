#include <bits/stdc++.h>
using namespace std;

char a[1001000];

int main()
{
    long long len,i,q;
    scanf("%lld",&q);
    while(q--)
    {
        long long dp[10] = {1};
        scanf(" %s",a);
        len = strlen(a);
        for(i=0; i<len; i++)
        {

            if(a[i] == 'A')
                dp[1]+=dp[0];
            if(a[i] == 'B')
                dp[2]+=dp[1];
            if(a[i]=='C')
                dp[3]+=dp[2];

        }
        printf("%lld\n",dp[3]);

    }
    return 0;
}
