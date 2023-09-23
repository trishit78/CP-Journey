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
    sort(arr.begin(),arr.end());
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    //cout<<sum<<endl;
    int start = arr[0];
    int end = arr[n-1];
    int add=0;
   for(int i=start;i<=end;i++){
    add+=i;
   }
   int diff= add-sum;
    cout<<diff<<endl;
}