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

        int n;
    cin>>n;
    vector<int> arr(n);
    set<int>s;
    

    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);    
    }
    int cnt=0;
    while(!s.empty()){
        int top =*s.rbegin();
        s.erase(top);
        if(top%2==0){
            cnt++;
            s.insert(top/2);
        }
    }
    cout<<cnt<<endl;
    }
}