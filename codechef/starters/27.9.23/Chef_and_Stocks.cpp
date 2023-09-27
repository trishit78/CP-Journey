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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mini =*min_element(arr.begin(),arr.end());
        int a = -(mini);
        int sum=0;
        for(int i=0;i<n;i++){
            sum +=arr[i];
        }
        int ans = sum+a;
        cout<<ans<<endl;

    }
}