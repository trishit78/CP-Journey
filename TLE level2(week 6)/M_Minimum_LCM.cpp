#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int a,int b){
    if(b==0)  return a;
    return gcd(b,a%b);
}

int lcm (int a,int b){
    return (a/gcd(a,b))*b;
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
        int a =1;
        int b= n-1;
        int curr=n-1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                int x = max((n/i),(n-(n/i)));
                int y = min((n/i),(n-(n/i)));
                int temp = lcm(x,y);
                if(temp<curr){
                    curr=temp;
                    a=y;
                    b=x;
                }
            }
        }
        cout<<a<<" "<<b<<endl;
    }
}