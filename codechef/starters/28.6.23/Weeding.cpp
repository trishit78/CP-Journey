#include <bits/stdc++.h>
using namespace std;
#include<limits.h>

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}

void solve(int n,int m,int k,vector<int> &a){
    int sprays =0;
    int prevDays =0;

    for(int i=0;i<n;i++){
        int new_weed = a[i];

        int rem = prevDays- new_weed +1;
        int num_sprays = max(0,rem-k+1);

           sprays += num_sprays;

        
        if (sprays >= m) {
            cout<<"YES"<<endl;
        }

        prevDays = new_weed;
    }

  
    int remaining_sprays = m - sprays;

   
    if (remaining_sprays >= n*k) {
        cout<<"YES"<<endl;
    }

    cout<<"NO"<<endl;

    }


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
        vector<int> a;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        solve(n,m,k,a);

    }
}