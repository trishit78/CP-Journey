#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> lpd(1000000,-1);

void sieve(){
    lpd[1]=1;
    for(int i=2;i<=1000000;i++){
        if(lpd[i]==-1){
            lpd[i]=i;
            for(int j=i*i;j<=1000000;j+=i){
                lpd[j]=i;
            }
        }
    }
}



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        sieve();
   
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int ans =1;
        while(n>1){
            int temp = n;
            int cnt =0;
            while(n%lpd[temp]==0){
                n/=lpd[temp];
                cnt++;
            }
            ans *= (cnt+1);
        }
        cout<<ans<<endl;
    }
    
}