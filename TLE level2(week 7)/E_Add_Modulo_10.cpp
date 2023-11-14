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
        int n;cin>>n;
        vector<int> a(n);
        int flag =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%10==0)
            flag=1;

            if(a[i]%10==5){
                flag=1;
                a[i]=a[i]+5;
            }
        }
        if(flag){
            bool temp = true;
            for(int i=1;i<=n;i++){
                if(a[i]!=a[i-1])
                    temp=false;
            }
            if(temp)
                 cout<<"YES"<<endl;
               
            else
                cout<<"NO"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                while(a[i]%10!=2){
                    a[i] += a[i]%10;
                }
            }
            sort(a.begin(),a.end());
            bool temp=true;
            for(int i=1;i<=n;i++){
                if((a[i]-a[i-1])%20){
                    temp=false;
                }
            }
            if(temp){
                 cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
    }
}