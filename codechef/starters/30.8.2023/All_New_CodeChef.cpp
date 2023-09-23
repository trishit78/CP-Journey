#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    if(x>y)
    cout<<"New"<<endl;
    if(x<y)
    cout<<"Old"<<endl;
    if(x==y)
    cout<<"Same"<<endl;
}