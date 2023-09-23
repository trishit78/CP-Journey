#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isPrime(int n){
    int flag =0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag =1;
        }
    }
    if(flag ==0)
    return true;
    else
    return false;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}