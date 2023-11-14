#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

    
    
int solve(int n, int s, vector<int> &arr){
     int count = 0;
    int ans = 0;

    for (int i=0; i<s; i++) 
    {
        ans += (arr[i] % 2 == 1);
    }

    if (ans > 0) 
    {
        count++;
    }

    for (int i = s; i < n; i++) 
    {
        ans += (arr[i] % 2 == 1);
        ans -= (arr[i-s] % 2 == 1);
        
        if (ans > 0) 
        {
            count++;
        }
    }

    return count;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt =solve(n,s,arr);

         cout<<cnt<<endl;

    }
}







