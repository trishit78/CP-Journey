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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a,b;  cin>>a>>b;
        if(a>b)
        swap(a,b);

        cout<<max(a*2,b) * max(a*2,b)<<endl;
    }
}