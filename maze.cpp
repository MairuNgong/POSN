#include <bits/stdc++.h>
using namespace std;

const int di[] = {-1,0,1,0};
const int dj[] = {0,1,0,-1};

struct GRAPH{
    int i,j;
};

int a[160][160];
queue <GRAPH> qu;
int disst[160][160], dissen[160][160];

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int sti, stj;
    scanf("%d %d", &sti, &stj);
    int eni, enj;
    scanf("%d %d", &eni, &enj);
    for(int i=1; i<=r ;i++)
    {
        for(int j = 1; j<=c ;j++)
            scanf("%d",&a[i][j]);
    }
    memset(disst, -1, sizeof(disst));
    disst[sti][stj] = 1;
    qu.push({sti,stj});
    while(!qu.empty())
    {
        int i = qu.front().i;
        int j = qu.front().j;
        qu.pop();
        for(int k = 0; k<4 ; k++)
        {
            int ii= i+ di[k];
            int jj = j + dj[k];
            if(ii <1 || jj <1 || ii > r|| jj > c)
                continue;
            if(disst[ii][jj] != -1)
                continue;
            disst[ii][jj] = disst[i][j] + 1;
            if(!a[ii][jj])
                continue;
            qu.push({ii,jj});
        }
    }
    memset(dissen,-1,sizeof(dissen));
    dissen[eni][enj] = 1;
    qu.push({eni,enj});
    while(!qu.empty())
    {
        int i = qu.front().i;
        int j = qu.front().j;
        qu.pop();
        for(int k = 0; k<4 ; k++)
        {
            int ii= i+ di[k];
            int jj = j + dj[k];
            if(ii <1 || jj <1 || ii > r|| jj > c)
                continue;
            if(dissen[ii][jj] != -1)
                continue;
            dissen[ii][jj] = dissen[i][j] + 1;
            if(!a[ii][jj])
                continue;
            qu.push({ii,jj});
        }
    }
    int cnt = 0, ans = r*c;
    for(int i = 1;i <= r;i++)
    {
        for(int j = 1; j<=c;j++)
        {
            if(a[i][j])
                continue;
            if(disst[i][j] == -1 || dissen[i][j] == -1)
                continue;
            cnt++;
            ans = min(ans, disst[i][j] + dissen[i][j] -1);
        }

    }
    printf("%d\n%d\n",cnt,ans);
    return 0;
}
