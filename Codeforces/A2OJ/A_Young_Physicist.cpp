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
        int a[n][3];
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
        int sum1 =0;

        for(int i=0;i<n;i++){
            sum1 += a[i][0];
        }
        int sum2 =0;

        for(int i=0;i<n;i++){
            sum2 += a[i][1];
        }
        int sum3 =0;

        for(int i=0;i<n;i++){
            sum3 += a[i][2];
        }
        if(sum1==0 && sum2==0 && sum3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}