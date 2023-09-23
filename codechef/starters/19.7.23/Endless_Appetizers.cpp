#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    int n,rem;
    while (tc--)
    {
        float x,y,r;
        cin>>x>>y>>r;
        
        float newR = r/30;
        float newX = x+newR;
        float n = newX/y;
        
        cout<<ceil(n)<<endl;












        // if(r==0){
        //     if(x%y==0){
        //          ans =x/y;
        //     }
        //      ans=(x/y)+1;
               
            
        // }
        // else{
        //     int newR = r/30;
        //     int newX = x+newR;
        //     if(newX%y==0){
        //         ans = newX/y;
        //     }
        //     else{
        //     ans=(newX/y)+1;
        //     }
            
        // }

        // cout<<ans<<endl;
    }
}

