#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,rem,flag =0; cin>>n;
    while(n!=0){
        rem = n%10;
        if(rem!=1 ||rem!=4){
           flag =1;
            break;
        }
        n/=10;
    }
    if(flag==0)
    cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl;
}