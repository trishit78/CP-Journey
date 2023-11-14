#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc=1;
    //cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        if(n<3) cout<<"GOLD"<<endl;
        else if(n>=3 && n<6)  cout<<"SILVER"<<endl;
        else  cout<<"BRONZE"<<endl;
    }
}