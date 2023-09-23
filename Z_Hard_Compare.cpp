#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;  cin>>a>>b>>c>>d;
    int ans1,ans2;
    ans1= pow(a,b);
    ans2= pow(c,d);
    if(ans1>ans2) {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}