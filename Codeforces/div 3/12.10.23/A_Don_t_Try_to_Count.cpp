#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(string s, string t){
    int ans=0;
    while(t.size() <= 1000){
        if(t.find(s) == string::npos){
            t=t+t;
            ans++;
        }
        else{
            cout<<ans<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return ;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>t>>s;
        solve(s,t);
       
    }
    return 0;
}