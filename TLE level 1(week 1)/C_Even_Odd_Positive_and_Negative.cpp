#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    // while (tc--)
    // {
        int arr[tc];
        for(int i=0;i<tc;i++){
            cin>>arr[i];
        }
        int even_count=0;
        int odd_count=0;
        for(int i=0;i<tc;i++){
         if(arr[i]%2==0){
            even_count++;
         }
         else
         odd_count++;
        }
        int pos_count=0;
        int neg_count=0;
        for(int i=0;i<tc;i++){
         if(arr[i]>0)
            pos_count++;
          else if(arr[i]<0)
            neg_count++;  
        }
        cout<<"Even: "<<even_count<<endl;
        cout<<"Odd: "<<odd_count<<endl;
        cout<<"Positive: "<<pos_count<<endl;
        cout<<"Negative: "<<neg_count<<endl;
    }
