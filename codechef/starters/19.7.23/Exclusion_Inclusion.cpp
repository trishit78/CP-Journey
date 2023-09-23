#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
vector<int> solve(vector<int> arr,int n){
    vector<int> maxi;

    sort(arr.begin(),arr.end());

    int sum =0;
    int minus =0;
    int ans =0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
        maxi.push_back(sum);
    for(int i=0;i<n-1;i++){
        minus+=arr[i];
        ans = sum -minus;
        maxi.push_back(ans);
    }

    return maxi;

    // for(int k=1;k<=n;k++){
    //     int score = 0;
    //     priority_queue<int> bucket;
    //     for(int i=0;i<k-1;i++){
    //         bucket.push(arr[i]);
    //     }
    //     for(int i=k-1;i<n;i++){
    //         bucket.push(arr[i]);
    //         score+= bucket.top();
    //         bucket.pop();
    //     }
    //     maxi[k-1] = score; 
    
    //     }

    //     return maxi;

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
        int sum =0;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> ans = solve(arr,n);

        for(auto i: ans){
            cout<<i<<" ";
        }
        cout<<endl;
        

    }
}