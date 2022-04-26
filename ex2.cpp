#include <bits/stdc++.h>
using namespace std;
char a[100100];
int cnt[30];

int main()
{
    int len,i;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0; i<len;i++)
        cnt[a[i]-'A']++;
    for(i=0;i<26;i++)
        printf("%d",cnt[i]);
    printf("\n");
    return 0;
}
