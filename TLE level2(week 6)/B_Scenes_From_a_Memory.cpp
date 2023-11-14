#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isPrime(int num){
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return false;
            break;
        }
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
           if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9'){
            cout<<1<<endl;
            cout<<s[i]<<endl;
        
           }
        }

        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<=s.size();i++){
                int num = (s[i]-'0')*10 + (s[j]-'0');
                    if(!isPrime(num)){
                        cout<<2<<endl;
                        cout<<s[i]<<s[j]<<endl;
            }
            }
        }
    }
}