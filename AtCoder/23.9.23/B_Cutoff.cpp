#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,total ;
    cin>>x>>total;
    int n =x-1;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    int maxi= *max_element(arr.begin(),arr.end());
    int mini = *min_element(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int t=0,ans=0;
    if(maxi==mini){
        t=sum-maxi;
        ans=total-t;
      //  cout<<"t"<<t<<endl;
       // cout<<"ans"<<ans<<endl;
    }
    else{

    t= sum-maxi-mini;
     ans = total-t;
    }
    // cout<<"MAX  "<<maxi<<endl;
    // cout<<"MINI  "<<mini<<endl;
    if( ans<maxi && ans>=0 && ans<100)
    cout<<ans<<endl;
    else
    cout<<-1<<endl;
    
}