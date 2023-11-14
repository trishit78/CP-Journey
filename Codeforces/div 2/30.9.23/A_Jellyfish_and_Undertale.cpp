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
        int c,initial,n;
        cin>>c>>initial>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        int ans =initial;
        for(int i=0;i<n;i++){
            int temp = min(c,arr[i]+1)-1;
            ans = ans + temp;
        }
        cout<<ans<<endl;
    }
}