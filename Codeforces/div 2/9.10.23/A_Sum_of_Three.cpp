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
        if(n<=6) cout<<"NO"<<endl;
        else if(n==9) cout<<"NO"<<endl;
        else if(n%3){
            cout<<"YES"<<endl;
            cout<<1<<" "<<2<<" "<<n-3<<endl;
        }
        else {
            cout<<"YES"<<endl;
            cout<<1<<" "<<4<<" "<<n-5<<endl;
        }
    }
}