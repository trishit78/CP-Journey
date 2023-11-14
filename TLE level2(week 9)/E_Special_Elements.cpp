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
        vector<int> count(n+1);
        for(auto &i : a){
            cin>>i;
            count[i]++;
        }

        int cnt=0;
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum += a[j];
                if(i==j) continue;
                if(sum<=n){
                   cnt += count[sum];
                    count[sum]=0;
                }
                    
            }
        }
        cout<<cnt<<endl;
    }
}