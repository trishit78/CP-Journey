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
        int x,y,t;
        cin>>x>>y>>t;
        int pageCount =0;
        int lineCount =0;
        pageCount = t/x;
        lineCount = t/y;
        int total = pageCount+lineCount;
        cout<<total<<endl;
    }
}