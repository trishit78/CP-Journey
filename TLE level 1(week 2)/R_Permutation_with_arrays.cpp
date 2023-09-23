#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n; cin>>n;
        int arr1[n],arr2[n];
        
        for(int i=0;i<n;i++)
        cin>>arr1[i];
        for(int i=0;i<n;i++)
        cin>>arr2[i];
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        
        int flag =0;
        for(int i=0;i<n;i++){
            if(arr1[i]!=arr2[i]){
                flag =1;
                break;
            }
        }
        if(flag ==1 )
        cout<<"no"<<endl;
        if(flag ==0)
        cout<<"yes"<<endl;

    }
