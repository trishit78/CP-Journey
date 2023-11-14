#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
bool solve(vector<int> a,int n){
        int sum =accumulate(a.begin(),a.end(),0);
        if(sum%n!=0){
            return false;
        }  
        else{
           
            int t = sum/n;
            for(int i=0;i<n;i++){
                if((t-a[i])%2!=0){
                    return false;
                }
            }
            return true;
            
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
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &i :a){
            cin>>i;
        }


        if(solve(a,n))  cout<<"Yes"<<endl;
        else   cout<<"No"<<endl;

    }
}




