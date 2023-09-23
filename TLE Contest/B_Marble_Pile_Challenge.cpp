#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool solve(int n,int m){
    if(n<=m){
        return false;
    }

    for(int a=1;a<n;a++){
      int b = n-a;
      if(a==2*b || b==2*a){
        return true;
        break;
      }
      else return false;

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
        int n,m;
        cin>>n>>m;
        

        if(solve(n,m)){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}