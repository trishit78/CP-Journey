#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
     int n,k,x;
        cin>>n>>k>>x;
        if(k==1){
            cout<<"NO"<<endl;
        return;
        }
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<"1"<<" ";
            }
            cout<<endl;
        return;
        }
        if(n%2  && k==2){
            cout<<"NO"<<endl;
        return;
        }
        if(n%2 ==0 ){
            cout<<"YES"<<endl;
            cout<<(n/2)<<endl;
            for(int i=0;i<(n/2);i++){
                cout<<"2"<<" ";
            }
            cout<<endl;
        return;
        }
        int total = n/2;
            cout<<"YES"<<endl;
            cout<<total<<endl;
        for(int i=1;i<n/2;i++){
            cout<<"2"<<" ";
        }
        cout<<"3"<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}