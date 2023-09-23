#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int solve(vector<pair<int,int>> &arr){
    int count =0;
    int h = arr[0].first;
    for(int i=1;i<=arr.size();i++){
        if(arr[i].first + arr[i].second <= h){
            count++;
        }
        break;
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
        int n;
        cin>>n;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i].first>>arr[i].second;
        }

        sort(arr.begin(),arr.end(),greater<pair<int,int>>());

        int ans= solve(arr);
        cout<<ans<<endl;
    }
}