#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
        sort(arr.begin(),arr.end());
        int ans =sum;
        for(int i=1;i<n;i++){
            for(int j=1;j*j<=arr[i];++j){
                if(arr[i]%j==0){
                    int x = arr[i]/j;
                    ans = min(ans,sum-arr[i]-arr[0]+arr[i]/j+arr[0]*j);
                    ans = min(ans,sum-arr[i]-arr[0]+arr[i]/x+arr[0]*x);
                }
            }
        }
        cout<<ans<<endl;
    }
