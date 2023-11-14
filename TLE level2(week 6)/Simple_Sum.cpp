#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;





signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        arr[i]=i;
    }

    for(int i=2;i<n;i++){
        if(arr[i]==i){
            for(int j=2*i;j<n;j+=i){
                arr[j] *= i-1;
                arr[j] /= i;
            }
            arr[i] = i-1;
        }
    }

    for(int i=0;i<11;i++)
        cout<<arr[i]<<" ";
}