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
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;

        int mina =min(a1,min(a2,a3));
        int minb = min(b1,min(b2,b3));

        int alice = a1+a2+a3 - mina;
        int bob = b1+b2+b3 - minb ;

        if(alice>bob){
            cout<<"Alice"<<endl;
        } 
        if(alice<bob){
            cout<<"Bob"<<endl;
        }
        if(alice==bob)
        cout<<"Tie"<<endl;
    }
}