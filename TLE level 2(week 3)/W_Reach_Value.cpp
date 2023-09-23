#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool solve(int n, int curr){
    if(curr>n){
        return false;
    }
    if(curr==n)  return true;

    bool ans = false;
    curr *= 10;
    ans |= solve(n,curr);
    curr/=10;
    curr*=20;
    ans|=solve(n,curr);
    curr/=20;
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int curr =1;
        if(solve(n,curr))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}