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
        while(n%2==0) n/=2;
        while(n%3==0) n/=3;

        if(n==1) cout<<"Yes"<<endl;
        else  cout<<"No"<<endl;
    }
}