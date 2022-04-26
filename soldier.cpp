#include <bits/stdc++.h>
using namespace std;

struct Soldier{
    int id, rk, idx;
    bool operator < (const Soldier & o) const{
        if(rk!=o.rk) return rk<o.rk;
        return idx>o.idx;
    }
};

priority_queue <Soldier> pq;

int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    for(int i=0;i<n;i++)
    {
        int opr,id,rk;
        scanf("%d",&opr);
        if(opr == 1)
        {
            scanf("%d %d", &id, &rk);
            pq.push({id,rk,i});
        }
        else{
            if(pq.empty()) printf("-1\n");
            else{
                printf("%d\n",pq.top().id);
                pq.pop();
            }

        }
    }
    return 0;
}
