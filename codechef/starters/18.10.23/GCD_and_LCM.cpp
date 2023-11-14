#include<bits/stdc++.h>

using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int x, int y) {
  while (y != 0) {
    int t = x;
    x = y;
    y = t % x;
  }
  return x;
}




signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x,y,k;
        cin>>x>>y>>k;

        int g = gcd(x,y);

        if(k==1) cout<<g+min(x,y)<<endl;
        else
            cout<<g+g<<endl; 

    }
}

