#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

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
        int x,y,n;
        cin>>x>>y>>n;
        int k=n;
        int ans;
        while(n>=0){
            if(n%x==y){
                cout<<n<<endl;
                break;
            }
        n--;    
        }

        
    }
}