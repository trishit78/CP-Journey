#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool check(int a,int b){
    return a%b==0 ;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];

        vector<int> b,c;

        sort(a.rbegin(),a.rend());
        b.push_back(a[0]);

        for(int i=1;i<n;i++){
            bool added =false;
            for(int j=0;j<n;j++){
                if(check(a[i],j)){
                    b.push_back(a[i]);
                    added =true;
                    break;
                }
            }
            if(!added){
                c.push_back(a[i]);
            }
        }

         

        if(b.size()!=0 || c.size()!=0|| !check(b[0],c[0])){
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto i:b)
            cout<<i<<" ";
            cout<<endl;

            for(auto j:c)
            cout<<j<<" ";
            cout<<endl;
        }
        else{
           cout<<-1<<endl;

        }

  //  }
}