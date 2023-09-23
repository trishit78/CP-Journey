#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


bool isPal(string s){
    int start=0;
    int end=s.size()-1;
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int solve(int i,string s){
    int cnt=0;
    int n = s.size();
        while(i<n){
        if(isPal(s[i])){
            cnt++;
            solve(i+1,s[i]);
        }
    }
    return cnt;

}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;

    int ans = solve(0,s);
    cout<<ans<<endl;
}