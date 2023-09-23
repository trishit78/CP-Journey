#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// int solve(int n,vector<int> arr,int k,int dp[]){
//     if(n==1)
//     return 0;

//     int ans=INF;
//     if(dp[n] !=-1)
//     return dp[n];


//     for(int i=1;i<=k;i++){
//         if(n-i<=0)  continue;
//         ans = min(ans,solve(n-1,arr,k,dp)+abs(arr[n]-arr[n-i]));
//     }
//     return dp[n] = ans;
// }

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    int dp[n];
    //memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    //cout<<solve(n,arr,k,dp)<<endl;

    for(int idx=1;idx<=n;idx++){
        if(idx==1){
            dp[idx]=0;
            continue;
        }
        dp[idx]=INF;
        for(int i=1;i<=k;i++){
            if(idx-i<=0) continue;
            dp[idx] = min(dp[idx],dp[idx-i]+abs(arr[idx]-arr[idx-i]));
        }
    }

    cout<<dp[n]<<endl;

}