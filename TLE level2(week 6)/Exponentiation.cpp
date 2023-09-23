#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int power(int a,int b){
    if(a== 0&& b==0)
    return 1;
    if(b==0)
    return 1;
    if(b==1)
    return a%MOD;
    int half = power(a,b/2) %MOD;
    if(b%2==0){
        return (half*half) %MOD;
    }
    else{
        return ((half*half)%MOD*a)%MOD;
    }
    if(b<0){
        return (1/half)%MOD;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a,b;
        cin>>a>>b;
        int ans = power(a,b);

        
        cout<<ans<<endl;

    }
}