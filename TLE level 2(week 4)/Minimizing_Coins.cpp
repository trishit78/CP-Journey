#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int f(int n,int x,vector<int> arr){
    if(x==0)  return 0;
    if(x<0) return INF;

    int ans =INF;
    for(int i=1;i<=n;i++){
        ans = min(ans,f(x-arr[i])+1);
    }

    return ans;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<f(n,x,arr)<<endl;
    // vector<int> dp(x+1,1e9);
    // dp[0]=0;
    // for(int i=1;i<=x;i++){
    //     for(int j=0;j<n;j++){
    //         if(i-arr[j]>=0){
    //             dp[i]=min(dp[i],dp[i-arr[j]]+1);
    //         }
    //     }
    // }
    // if(dp[x]==1e9)
    // cout<<-1<<endl;
    // cout<<dp[x]<<endl;
}