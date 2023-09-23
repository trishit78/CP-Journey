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
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int diff1 = a1-a2;
        int diff2 = b1-b2;
        int diff= diff1+diff2;
        if(diff<0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}