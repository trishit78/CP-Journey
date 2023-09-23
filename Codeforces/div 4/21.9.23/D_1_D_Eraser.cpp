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
        int n,k;
        cin>>n>>k;
        // vector<string> str(n);
        // for(int i=0;i<n;i++){
        //     cin>>str[i];
        // }

        string str;
        cin>>str;
        int m = str.length();


        
            int st=0;
        for(int i=0;i<m;i++){
            if(str[i] =='B'){
                st=i;
                break;
            }
        
        for(int i=st;i<=3;i++){
            str[i]='W';
        }
        }
        
        

        cout<<str<<endl;
    }
}



