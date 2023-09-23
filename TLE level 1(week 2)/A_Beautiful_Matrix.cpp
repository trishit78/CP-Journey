#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num [5][5],count =0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>> num[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
          if(num[i][j] ==1)
          count = abs(i-2)+abs(j-2);
        }
    }
    cout<<count<<endl;
}