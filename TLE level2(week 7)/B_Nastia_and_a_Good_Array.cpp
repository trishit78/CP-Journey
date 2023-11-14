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
        int n;
    cin>>n;
 
    int mn=0;
    vector<int> v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
        if (v[i]<v[mn]) mn=i;
    }
 
    cout<<n-1<<endl;
    for (int i=mn+1;i<n;i++) {
        cout<<mn+1<<" "<<i+1<<" "<<v[mn]<<" "<<v[mn]+i-mn<<endl;
    }
    for (int i=mn-1;i>=0;i--) {
        cout<<mn+1<<" "<<i+1<<" "<<v[mn]<<" "<<v[mn]-(i-mn)<<endl;
    }
}
        
    }


