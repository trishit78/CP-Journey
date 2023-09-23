#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int solve(int n,int m,vector<int> &balls){
    int count=0;
    int sum=0;
    sort(balls.rbegin(),balls.rend());
    for(int i=0;i<m;i++){
        sum+=balls[i];
       
        if(sum>=m){
            count ++;
            

        }
    }
    return count;
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

        vector<int> balls(m);
        for(int i=0;i<m;i++){
            cin>>balls[i];
        }

        int ans = solve(n,m,balls);
        cout<<ans+1<<endl;

    }
}


