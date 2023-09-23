#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    int rem1,rem2;

    rem1=n%10;
    rem2=m%10;

    int sum = rem1+rem2;

    cout<<sum<<endl;
}