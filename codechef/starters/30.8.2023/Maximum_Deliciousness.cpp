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
        int n,k,l;
        cin>>n>>k>>l;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        
        int total=0;
        int diff= k-1;
        for(int i=l-1;i<n;i+=diff){
            total +=arr[i];
        }
        cout<<total<<endl;

    }
}