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
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int flag1=1;
        int flag2=1;
        for(int i=0;i<n;i++){
            if(a[i]==1) flag1=0;
            if(i<n-1 && a[i]+1==a[i+1])
                flag2=0;
        }

        if(flag1==0&& flag2==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}