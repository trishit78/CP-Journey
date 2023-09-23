#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n;cin>>n;
        vector<int> arr(n-1);
        for(int i=0;i<arr.size();i++){
            cin>>arr[i];
        }
        
       int sum = (n*(n+1))/2;

       int arrS =0;
       for(int i=0;i<arr.size();i++){
        arrS += arr[i];
       }
       int diff = abs(sum - arrS);
       cout<<diff<<endl;
}