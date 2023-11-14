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
        int n,x,m;
        cin>>n>>x>>m;
        int l1=x;
        int r1=x;
        while(m--){
            int l,r;
            cin>>l>>r;
            if(l1>r || r1<l) continue;
            else{ 
                l1=min(l,l1);
                r1=max(r,r1);

            }
        }
            cout<<r1-l1+1<<endl;
    }
}