#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; cin>>n>>m;
   
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i*i+j==n && i+j*j==m)
            count++;
        }
    }
    cout<<count<<endl;

}