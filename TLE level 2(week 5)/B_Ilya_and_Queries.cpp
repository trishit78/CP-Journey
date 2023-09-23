#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n= s.length();
    
    vector<int> ps(n,0);

    ps[0] = (s[0]==s[1]);

    for(int i=1;i<n-1;i++){
        ps[i]=ps[i-1]+ (s[i]==s[i+1]);
    }

    int tc;
    cin >> tc;
    while (tc--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        if(l==0)
            cout<<ps[r-1]<<endl;
        else
            cout<<ps[r-1]-ps[l-1]<<endl;

    }
}