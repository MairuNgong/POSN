#include <stdio.h>

double a[10][10];
double ans = 0.00;
int di[] = {-1,-1,-1,0,0,1,1,1}, dj[] = {-1,0,1,-1,1,-1,0,1};
int e[10][10];
int m,n;

void search(int i, int j)
{
    int k,ii,jj;
    double min = 100000001,now=0;

    ans = ans + a[i][j];
    e[i][j] = 1;
    for(k=0;k<8;k++)
    {
        ii = i+di[k];
        jj = j+dj[k];
        if(ii<0||ii>=m||jj<0||jj>=n) continue;
        if(!e[ii][jj])
        {
            a[ii][jj] += a[i][j]/10;
            if(a[ii][jj]<=min) min = a[ii][jj];
        }
    }
    for(k=0;k<8;k++)
    {
        ii = i+di[k];
        jj = j+dj[k];
        if(ii<0||ii>m||jj<0||jj>n) continue;
        if(!e[ii][jj]&&a[ii][jj]==min)
        {
            e[ii][jj] = 1;
            search(ii,jj);
            e[ii][jj] = 0;
        }
    }
    return;

}

int main()
{
    int i,j;
    double min=100000001;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            scanf("%lf",&a[i][j]);
            if(a[i][j] < min) min = a[i][j];
        }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            if(a[i][j] == min)
                {
                    e[i][j] = 1;
                    search(i,j);
                    e[i][j] = 0;
                }
        }
    printf("%.2lf",ans);
    return 0;
}
