#include <bits/stdc++.h>
using namespace std;
// #define endl

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b; cin>>a>>b;

    if(a%b==0 || b%a ==0 ){
        cout<<"Multiples"<<endl;
    }
    
    else{
        cout<<"No Multiples"<<endl;
    }
    
}