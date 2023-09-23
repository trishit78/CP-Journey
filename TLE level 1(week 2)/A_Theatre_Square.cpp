#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a,x,y;
    cin>>n>>m>>a;
    if(n%a == 0)
        x= n/a;
    else
        x= n/a+1;
    if(m%a ==0)
        y= m/a;
    else
        y= m/a+1;

    cout<<x*y<<endl;

}