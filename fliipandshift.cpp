#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        int odd = 0, even = 0;
        for(int i=1; i<=n;i++)
        {
            int val;
            scanf("%d",&val);
            if(!val)
                continue;
            if(i % 2 ==1)
                odd++;
            if(i % 2 == 0)
                even++;
        }
        int ch = abs(odd - even);
        if(ch > 1 && n % 2 == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }




    return 0;
}
