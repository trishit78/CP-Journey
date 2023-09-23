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
        int x,y,n;
        cin>>x>>y>>n;
        int arr[n];
        while(n--){
            int num =x;
            int i=0;
            arr[i]=num;
            num++;
            i++;
        }
       
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
    }
