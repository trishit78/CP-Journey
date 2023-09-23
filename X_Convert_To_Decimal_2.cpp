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
         int n;  cin>>n;
    int binary=0, remainder, product =1;
    vector<int> bin ;
    while(n!=0){
        remainder= n%2;
        binary = binary+(remainder*product);
        n/=2;
        product *=10;
    }
    bin.push_back(binary);
    cout<<bin<<endl;
    int count =0;
    for(int i=0;i<bin.size();i++){
        if(bin[i]==1)
        count++;
    }  
    cout<<count<<endl; 
    // int one ;
    // while(count--){

    // }
}
}