#include <bits/stdc++.h>
using namespace std;



// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;



void solve(int x,int y,int z,int *a,int *b){
    if((x*y)%z==0){
           * b=z;
            *a=(x*y);
           // cout<<a<<" "<<b<<endl;
            //break;
        }
        else if((y*z)%x==0){
           * b=x;
           * a=y*z;
            //cout<<a<<" "<<b<<endl;
                        //break;
        }
       else if((x*z)%y==0){
           * b=y;
           * a=x*z;
           // cout<<a<<" "<<b<<endl;
                        //break;
        }
        else{
            *b=0;
            *a=0;
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
        int x,y,z;
        cin>>x>>y>>z;
        int a,b;
        solve(x,y,z,&a,&b);
        if(a==0 && b==0){
            cout<<-1<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }

       
       

       
        
        

    }
}