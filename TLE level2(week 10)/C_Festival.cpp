#include <bits/stdc++.h>
#include <algorithm>  
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
        int n,m;
        cin>>n>>m;
        vector<int> a(m+1);
        for(int i=0;i<m;i++){
            cin>>a[i];
            //a[i]--;
        }

        int i=0;
        int j=1;
        while(n--){
            if(a[i]==j){
                cout<<0<<endl;
                i++;
                j++;
            }
            if(a[i]>j){
                cout<<a[i]-j<<endl;
                j++;
            }
        }
        


        // for(int i=0;i<n;i++){
        //     int x = *lower_bound(a.begin(),a.end(),i);
        //     cout<<x-i<<endl;

        // }

      
}
