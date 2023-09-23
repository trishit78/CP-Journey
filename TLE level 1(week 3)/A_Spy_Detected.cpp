#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int check=0;
        if(arr[0] != arr[1]){
            check = arr[2];
        }
        else{
            check =arr[0];
        }
        for(int i=0;i<n;i++){
            if(check != arr[i]){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}