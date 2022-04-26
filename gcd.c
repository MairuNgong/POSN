#include <stdio.h>

int ans,num;

void gcd(int a,int b)
{
        if(a%b==0) {
            ans = b;
            return ;
        }
        else gcd(b,a%b);

}

int main()
{
    int n,i;
    scanf("%d",&n);
    scanf("%d",&ans);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&num);
        gcd(ans,num);
    }
    printf("%d",ans);
    return 0;
}
