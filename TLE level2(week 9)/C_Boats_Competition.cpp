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
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=2;i<=100;i++){
            int j=0;
            int k=n-1;
            int ans1 =0;
            while(j<k){
                if(j<n  && a[j]+a[k]<i){
                    j++;

                }
                else if(k>j && a[j]+a[k]>i){
                    k--;
                }
                else if( j<k  &&  a[j]+a[k]==i){
                    j++;
                    k--;
                    ans1++;
                }
            }
        ans = max(ans,ans1);
        }
        cout<<ans<<endl;
    }
}