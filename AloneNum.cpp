#include <bits/stdc++.h>
using namespace std;

vector<int> v;
map<int, int> mp;

int main()
{
    int q,n,x,i,ch;
    scanf("%d",&q);
    while(q--)
    {
        ch = 0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            mp[x]++;
            v.push_back(x);
        }
        for(int i=1; i<=n; i++)
        {
            if(mp[v[i]] == 1)
                ch = 1;
        }
        if(ch ==0 ) printf("No Alone Num");
        for(int i=1;i<=n;i++)
        {
            if(mp[v[i]] == 1)
                printf("%d ",v[i]);
        }
        v.clear();
        mp.clear();
        printf("\n");
    }
    return 0;
}
