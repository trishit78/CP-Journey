#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int arr[n];
    int ans;
   int count =0;

    for(int i=1;i<=n;i+=2){
        if(count==k)
        break;
        ans =i;
        count++;
    }
    for(int i=2;i<=n;i+=2){
        if(count==k)
        break;
        ans =i;
        count++;
    }

    cout<<ans<<endl;


}