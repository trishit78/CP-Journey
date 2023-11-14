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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        while(k--){
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            if(a[0]<b[n-1]){
                swap(a[0],b[n-1]);
            }
        }
        int s=0;
        for(int i=0;i<n;i++)  s+=a[i];
        cout<<s<<endl;
        
    }
}