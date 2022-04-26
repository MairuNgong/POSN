#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
char a[30][30],w[20];
int len , di[] = {-1,-1,-1,0,0,1,1,1}, dj[] = {-1,0,1,-1,1,-1,0,1};

int main()
{
    int r,c,i,j,k,l,ii,jj,x,y,state,q;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf(" %c",&a[i][j]);
            a[i][j]=tolower(a[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf(" %s",w);
        len = strlen(w);
        for(i=0;i<len;i++) w[i]=tolower(w[i]);
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]==w[0])
                {
                    for(k=0;k<8;k++)
                    {
                        ii=i,jj=j;
                        for(l=1;l<len;l++)
                        {
                            ii+=di[k], jj+=dj[k];
                            if(ii<0 || jj<0 || ii>=r || jj>=c) break;
                            if(a[ii][jj]!=w[l]) break;
                            if(l==len-1)
                            {
                                printf("%d %d\n",i,j);
                                k=8, i=r, j=c;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
