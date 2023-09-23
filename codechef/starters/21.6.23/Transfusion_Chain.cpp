#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

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
        int n;  cin>>n;
        vector<string> v(n);
        for(int i=0;i<v.size();i++){
            cin>>v[i];
        }
        map<string,int> mp;
        for(auto i:v){
            mp[i]++;
        }

        int ans;
        ans = max(mp["O"]+mp["A"]+mp["AB"],mp["O"]+mp["B"]+mp["AB"]);
        cout<<ans<<endl;
    }
}