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
    int h,x;
    cin>>n>>h>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum =h;
    int cnt =0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
        if(sum>=x)
        cnt++;

    }
    
    cout<<cnt<<endl;
}