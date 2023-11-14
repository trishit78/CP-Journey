#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int GCD(int a,int b){
    if(b==0)  return a;
    return GCD(b,a%b);
}
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
        vector<int> arr(1001,-1);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[x]=i+1;

        }
        int ans =-1;
        for(int i=1;i<1001;i++){
            for(int j=i;j<1001;j++){
                if(__gcd(i,j)==1  && arr[i] != -1 && arr[j] !=-1 ){
                    ans = max(ans,arr[i]+arr[j]);
                }
            }
        }

       // for(int i=0;i<1001;i++)
        //cout<<"arr   "<<arr[i]<<endl;
        cout<<ans<<endl;
    }
}