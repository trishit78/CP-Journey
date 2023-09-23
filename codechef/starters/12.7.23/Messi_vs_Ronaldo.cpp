#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        int a,b,x,y;
        cin>>a>>b>>x>>y;

        int total_messi = 2*a+b;
        int total_ronaldo = 2*x+y;

        if(total_messi>total_ronaldo){
            cout<<"Messi"<<endl;
        }
        
        if(total_messi<total_ronaldo){
            cout<<"Ronaldo"<<endl;
        }
        
        if(total_messi==total_ronaldo){
            cout<<"Equal"<<endl;
        }
    
}