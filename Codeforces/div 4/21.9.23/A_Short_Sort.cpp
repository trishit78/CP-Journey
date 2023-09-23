#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string solve(string s){
    if(s=="abc"){
        return "YES";
    }
    if(s=="acb"||s=="bac"||s=="cba"){
        return "YES";
    }
    else{
        return "NO";
    }
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin>>s;
        
        string res = solve(s);
        cout<<res<<endl;
    }
}