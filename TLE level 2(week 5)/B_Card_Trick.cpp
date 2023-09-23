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

        int in=0;
        int q;
        cin>>q;
        while(q--){
            int val;
            cin>>val;
            in = (in+val)%n;
        }

        cout<<a[in]<<endl;
    }
}