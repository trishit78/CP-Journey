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
    int n;
    cin >> n;
    char str[n];
    cin>>str;
    int anton=0,danik=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == 'A')
        anton++;
        else if(str[i] == 'D')
        danik++;
    }
    if(anton == danik){
        cout<<"Friendship"<<endl;
    }
    else if(anton>danik){
        cout<<"Anton"<<endl;
    }   
    else
    cout<<"Danik"<<endl;
    
}