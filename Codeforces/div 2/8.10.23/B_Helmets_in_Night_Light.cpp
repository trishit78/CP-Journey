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
        int n,p;
        cin>>n>>p;
        vector<vector<int>> a(n,vector<int> (2));

        for(int i=0;i<n;i++){
            cin>>a[i][1];
        }
        
        for(int i=0;i<n;i++){
            cin>>a[i][0];
        }

        map<int,int> mp;
        mp[p]=n+5;
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=0; i<n;i++){
            int mn = mp.begin()->first;
            ans += mn;
            mp[mn]--;
            mp[a[i][0]]+= a[i][1];
            if(mp[mn]==0) 
                mp.erase(mn);
        }
        cout<<ans<<endl;
        
    }
}