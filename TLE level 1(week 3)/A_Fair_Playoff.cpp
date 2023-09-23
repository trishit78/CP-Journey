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
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int ans1,ans2;
        ans1=max(s1,s2);
        ans2= max(s3,s4);

        if(min(s1,s2)>ans2  || ans1<min(s3,s4))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}