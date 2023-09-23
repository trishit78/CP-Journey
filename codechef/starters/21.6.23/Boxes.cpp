#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;



int countBox(vector<int> &arr,int n){
    sort(arr.begin(), arr.end(), greater<int>());

    int box =0;
    vector<int> xorSum;
    for(int i=0;i<arr.size();i++){
        bool placed = false;
        for(int j=0;j<xorSum.size();j++){
            if(xorSum[j]^ arr[i]< xorSum[j]){
                xorSum[j] ^= arr[i];
                placed = true;
                break;
            }
        }
    
    if(!placed){
        xorSum.push_back(arr[i]);
        box++;
    }
    }
    return box;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;  cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int box = countBox(arr,n);
        cout<<box<<endl;
    }
}



