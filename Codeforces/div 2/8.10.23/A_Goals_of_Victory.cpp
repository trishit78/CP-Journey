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
        int t;
        cin>>t;
        int n=t-1;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum =0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int ans = (-1)*sum;
        cout<<ans<<endl;
    }
}