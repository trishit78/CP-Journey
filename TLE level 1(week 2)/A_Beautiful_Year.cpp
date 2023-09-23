#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin>>n;
    n++;
    int a,b,c,d;
    while(1){
        d = n%10;
        c= (n%100)/10;
        b= (n%1000)/100;
        a = n/1000;
        if(a==b || a==c || a==d || b==c || b==d || c==d){
            n++;
        }
        else{
            break;
        }
       
    }
     cout<<n<<endl;
}