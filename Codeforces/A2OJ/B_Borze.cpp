#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string ans =" ";
    for(int i=0;i<s.length();){
        if(s[i]=='.'){
            ans =ans+'0';
            i++;
        }

        else if(s[i]=='-' && s[i+1]=='.'){
            ans =ans+'1';
            i+=2;
        }

        else if(s[i]=='-' && s[i+1]=='-'){
            ans = ans+'2';
            i+=2;
        }

    }
    cout<<ans<<endl;
}