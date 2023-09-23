#include <bits/stdc++.h>
using namespace std;
#define endl

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
        int n;cin>>n;
        int moves =0;
        while(n>1 && (n%2==0 || n%3==0)){
            if(n%6==0){
                n/=6;
            }
            else{
                n*=2;
            }
            moves++;
        }
        if(n==1){
            cout<<moves<<endl;
        }
        else{
            cout
        }
    }
}