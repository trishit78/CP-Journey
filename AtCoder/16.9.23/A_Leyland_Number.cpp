#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a,int b){
    if(b==0)
    return 1;
    else if(b%2==0){
        int half = power(a,b/2);
        return half*half;
    }
    else{
        return a*power(a,b-1);
    }
        
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;

    int ans1= power(a,b);
    int ans2= power(b,a);

    int ans = ans1+ans2;

    cout<<ans<<endl;
}