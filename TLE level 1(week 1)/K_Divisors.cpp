#include <bits/stdc++.h>
using namespace std;
// #define endl

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin>>n;

    for(int i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<endl;
    }
}