#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc=1;
    //cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int cnt1=0;
        int cnt2=0;
        int l=0;
        int r=n-1;
        while(l<r){
           
            if(a[l]>a[r]){
                a[l] -= a[r];
                cnt2++;
                r--;
                if(l==r) cnt1++;
            }
            else if(a[l]<a[r]){
                a[r]-=a[l];
                cnt1++;
                l++;
                if(l==r) cnt2++;
            }
            else if(a[l]==a[r]){
                cnt1++;
                cnt2++;
                l++;
                r--;
                if(l==r) cnt1++;
            }
        
        }
        if(n==1)
            cout<<1<<" "<<0<<endl;
        else
        cout<<cnt1<<" "<<cnt2<<endl;

    }
}