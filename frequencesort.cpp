#include <bits/stdc++.h>
using namespace std;

map <char, int> mp;

int main()
{
   int n;
   scanf("%d", &n);
   while(n--)
   {
       char x;
       scanf(" %c",&x);
       mp[x]++;
       printf("%d ",mp[x].second);
   }

    return 0;
}
