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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int s = accumulate(a.begin(),a.end(),0);
        if(s<n) cout<<"NO"<<endl;
        else{
            s = s%n;
            if(s!=0 && k==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
}