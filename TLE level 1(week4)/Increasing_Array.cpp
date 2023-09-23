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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int diff =0;
    int count =0;
    for(int i=1;i<=n;i++){
        if(arr[i-1]>arr[i]){
            diff = arr[i-1]-arr[i];
            arr[i]+=diff;
            count += diff;
        }
    }
    cout<<count<<endl;

}