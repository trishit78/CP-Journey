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
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(n==1)  cout<<0<<endl;

        int ans=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1] && a[i]==x){
                stack<int>  forward,backward;
                for(int j=0;j<=i;j++){
                    forward.push(a[j]);
                }
                for(int j=n-1;j>i;j--){
                    backward.push(a[j]);
                }
                int initial =1;
                int num =a[i];
                while(true){
                    if(!forward.empty()){
                        num = forward.top();
                    }
                    while(!forward.empty()  && forward.top() ==num){
                        initial++;
                        forward.pop();
                    }
                    while(!backward.empty()  && backward.top() ==num){
                        initial++;
                        backward.pop();
                    }
                    if(initial>=3){
                        initial =0;
                        continue;
                    }
                    else{
                        ans =max(ans,n-forward.size()-backward.size()-initial);
                        break;
                    }
            }
        }
    }
        cout<<ans<<endl;
    }
}