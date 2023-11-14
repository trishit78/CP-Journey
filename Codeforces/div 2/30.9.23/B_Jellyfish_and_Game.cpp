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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<int> b(m);
        for(int i=0;i<m;i++)
            cin>>b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());


        
        if(k%2==1){
            if(a[0]<b[m-1]){
                swap(a[0],b[m-1]);
            }
        }
        else{
            if(b[0]<a[n-1])
                swap(b[0],a[n-1]);
        }
        int sum =0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        cout<<sum<<endl;
    }
}