#include <stdio.h>

char a[50][50];
int b[50];
int main()
{
    int n,m,i,j,k,cnt = 0;
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            scanf(" %c",&a[i][j]);
    }
    for(i=0; i<m; i++)
        scanf("%d",&b[i]);
    for(j=0; j<m; j++)
    {
        cnt = 0;
        for(i=0; i<n; i++)
        {
            if(a[i][j] != '.')
            {
                for(k=1; k<=b[j]; k++)
                {
                    if(i-k >= 0 && cnt == 0)
                        a[i-k][j] = '#';
                }
                cnt+=1;
            }
            else if(i == n-1 && cnt == 0)
                for(k=0; k<b[j]; k++)
                    a[i-k][j] = '#';
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf(" %c",a[i][j]);
        printf("\n");
    }

    return 0;
}
