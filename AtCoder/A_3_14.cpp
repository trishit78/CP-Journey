#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s="1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    string ans="3.";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ans+=s[i];
    }

    cout<<ans<<endl;

}