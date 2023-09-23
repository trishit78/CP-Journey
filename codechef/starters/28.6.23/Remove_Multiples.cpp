#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
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
        vector<int> a(m);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        int sum =0;
        for(int i=1;i<=n;i++){
            sum +=  i;
        }
        // cout<<sum<<endl;
        int total =0;
        for(int i=0;i<m;i++){
            total += a[i];
        }
        // cout<<total<<endl;
        int cost = sum -total;
        cout<<cost<<endl;
    }
}