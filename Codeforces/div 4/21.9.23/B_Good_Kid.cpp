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
        int n; cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<1;i++){
            arr[i] = arr[i]+1;
        }

        int prod =1;
         for(int i=0;i<n;i++){
            prod = prod * arr[i];
        }
        cout<<prod<<endl;
    }
}