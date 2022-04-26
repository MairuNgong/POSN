#include <bits/stdc++.h>
using namespace std;

int a[110];

int main()
{

    int n,i,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        a[num]++;
    }
    for(i=0;i<110;i++)
    {
        if(a[i]!=0) printf("number of %d = %d \n",i,a[i]);
    }
  return 0;
}
