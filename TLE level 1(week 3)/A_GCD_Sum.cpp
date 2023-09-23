#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int gcd(int n,int sum){
    // if(n==sum)
    // return n ;
    // if(n>sum){
    //     return gcd(n-sum,sum);
    // }
    // else{
    //     return gcd(n,sum-n);
    // }

    if(sum ==0){
        return n;
    }
    else{
        return gcd(sum,sum%n);
    }
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
        int sum =0,rem;
        while(n>0){
            
            sum=sum+(n%10);
            n/=10;
        }
        
        while(1){
            if(gcd(n,sum)>1){
                cout<<n<<endl;
                break;
            }
            n++;
        }
        //cout<<gcd(n,sum)<<endl;
    }
}