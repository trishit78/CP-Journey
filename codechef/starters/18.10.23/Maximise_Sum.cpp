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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int mini = *min_element(a.begin(),a.end());
        int x = *lower_bound(a.begin(),a.end(),mini);
        int s = accumulate(a.begin(),a.end(),0);
        int ans = s-mini+x;
        cout<<ans<<endl;
    }
}