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
    int upper=0;
    int lower =0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i]))
            upper++;
        if(islower(s[i]))
            lower++;
        
    }
    string ans;
    if(upper>lower){
        for(char &c : s){
            c=toupper(c);
        }
    }
    else{
         for(char &c : s){
            c=tolower(c);
        }
    }
    cout<<s<<endl;
}