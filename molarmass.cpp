#include <bits/stdc++.h>
using namespace std;

char s[110];

unordered_map <char, int> mp;

stack <int> st;

int main()
{
    int q;
    scanf("%d",&q);
    mp['H'] = 1;
    mp['C'] = 12;
    mp['O'] = 16;
    while(q--){
        scanf(" %s", s);
        int len = strlen(s);
        for(int i=0; i<len ;i++)
        {
            if(isalpha(s[i])){
                st.push(mp[s[i]]);
                continue;
            }
            if(s[i] == '(')
            {
                st.push(-1);
                continue;
            }
            if(isdigit(s[i])){
                int top = st.top();
                st.pop();
                top *= s[i] - '0';
                st.push(top);
            }
            if(s[i] == ')'){
                int sum = 0;
                while(1)
                {
                    int top = st.top();
                    st.pop();
                    if(top == -1)
                        break;
                    sum += top;
                }
                st.push(sum);
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        printf("%d\n", ans);
    }
    return 0;
}
