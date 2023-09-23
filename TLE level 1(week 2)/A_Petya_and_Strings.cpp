#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(string a,string b){
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    if(a>b){
        cout<<"1"<<endl;
        return;
    }
    if(a==b)
    cout<<"0"<<endl;
    else
    cout<<"-1"<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    solve(a,b);
}