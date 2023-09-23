#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n<=1)
    cout<<"NO"<<endl;
    else{
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    vector<int> ans(s.begin(),s.end());
    int flag=0;
    for(int i=1;i<ans.size();i++){
        if(ans[i]>ans[i-1]){
            flag=1;
            cout<<ans[i]<<endl;
            break;
        }
    }

    if(flag==0)
    cout<<"NO"<<endl;

    }
}