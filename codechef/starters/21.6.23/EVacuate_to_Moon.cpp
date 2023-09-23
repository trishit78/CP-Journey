#include <bits/stdc++.h>
using namespace std;
#define endl  '\n';

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,m,h;
        cin>>n>>m>>h;

        vector<int> cars(n);

        for(auto &i: cars)
        cin>>i;
        vector<int> outlets(m);
        for(auto &i: outlets){
            cin>> i;
        }

        sort(cars.rbegin(),cars.rend());
        sort(outlets.rbegin(),outlets.rend());

        int ans=0;
        for(int i=0, j=0;i<n && j<m;i++,j++){
            ans += min({cars[i],h*outlets[j]});
        }
        cout<<ans<<endl;
    }
}