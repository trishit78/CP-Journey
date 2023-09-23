#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int solve(vector<string> &arr){
    int ans = 0;
    int t[] = {1,2,3,4,5};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]=='X'){
                int d = abs(i-4)+abs(j-4);
                ans+= t[d];
            }
        }
    }
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
        vector<string> target(10);
       for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin >> target[i][j];
        }
    }
        int res = solve(target);
        cout<<res<<endl;
    }
}