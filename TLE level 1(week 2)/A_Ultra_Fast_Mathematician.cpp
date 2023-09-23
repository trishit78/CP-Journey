#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    string ans="";
    for(int i=0;i<s1.size();i++){
        int temp= int(s1[i]-'0')^int(s2[i]-'0');
        ans+=to_string(temp);
    }

    cout<<ans<<endl;

    
    

   

}