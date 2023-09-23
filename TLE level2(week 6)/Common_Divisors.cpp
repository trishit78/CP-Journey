#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int a,int b){
    if(b==0)  return a;
    return gcd(b,a%b);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans=0,maxi=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            ans = gcd(arr[i],arr[j]);
            maxi = max(maxi,ans);
        }
    }
    cout<<maxi<<endl;
}