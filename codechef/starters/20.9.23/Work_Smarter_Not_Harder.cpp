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
    while (tc--)
    {
        int l,v1,v2;
        cin>>l>>v1>>v2;
       
        
        // float x1=l/v1;
        // float d1=ceil(x1);
        //float x2=l/v2; 
          float d1= (l+v1-1)/v1;
        float d2= (l+v2-1)/v2;
        int diff= abs(d1-d2);
        // cout<<"d1  "<<d1<<endl;
        // cout<<"d2  "<<d2<<endl;

        // cout<<"diff  "<<diff<<endl;
        if(diff>1){
            cout<<diff-1<<endl;
        }
        else if(diff==1){
            cout<<diff-1<<endl;
        }
        else if(diff==0){
            cout<<diff-1<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}