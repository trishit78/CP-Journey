#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int solve(int n,int x,int k,int p){
   int total ;
        if(x>=k){
            total = p + (k*10);
          
        }
        if(x<k){
            int y = k-x;
            total = p+ (x*10)+ (y*5);
            if(n==k){
                total += 20;
            }
            
        }

        return total;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,x,k,p;
        cin>>n>>x>>k>>p;


    int ans = solve(n,x,k,p);
    cout<<ans<<endl;
        
        

        // cout<<total<<endl;
    }
}