#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int a,int b){
    if(b==0)  return a;
    return gcd(b,a%b);
}

int lcm (int a,int b){
    return (a/gcd(a,b))*b;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int a,b;
        int ans=INT_MAX;
        unordered_map<pair<int,int>,int> mp;
        for(int a=1;a<=n/2;a++){
            b=n-a;
            int x = lcm(a,b);
            mp.p
            ans = min(ans,x);
        }
        cout<<ans<<endl;
    }
}