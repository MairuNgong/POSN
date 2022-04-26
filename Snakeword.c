#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[50][50],e[50][50];
char w[110];
int m,n,len,ch;
int di[] = {-1,1,0,0}, dj[] = {0,0,1,-1};
int d[200][2];

void play(int i,int j,int state)
{
    int k,ii,jj;
    d[state][0] = i+1, d[state][1] = j+1;

    if(state == len -1)
    {
        for(k=0;k<len;k++)
        {
            printf("%d%d\n",d[k][0],d[k][1]);
        }
        ch=0;
        return;
    }

    for(k=0;k<4;k++)
    {
        ii = i+di[k];
        jj = j+dj[k];
        if(ii<0||ii>=m||jj<0||jj>=n) continue;
        if(w[state+1] != a[ii][jj]) continue;
        if(e[ii][jj]) continue;
        e[ii][jj] = 1;
        play(ii,jj,state+1);
        e[ii][jj] = 0;
    }
}

int main()
{
    int i,j,q;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = toupper(a[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf(" %s",w);
        len = strlen(w);
        for(i=0; i<len; i++)
            w[i] = toupper(w[i]);
        ch=1;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++){
                if(a[i][j] == w[0]){
                    e[i][j] = 1;
                    play(i,j,0);
                    e[i][j] = 0;
                }
            }
        }
        if(ch) printf("No Matching Word\n");
    }


    return 0;
}
