#include <stdio.h>
int calre(int m,int n);

int main()
{
    int m,n;
    printf("Enter : ");
    scanf("%d %d",&m,&n);
    printf("%d",calre(m,n));
}

int calre(int m, int n)
{
    if(m==0) return n+1;
    else if(n==0) return calre(m-1,1);
    else return calre(m-1,calre(m,n-1));
}
