#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){

    ll n;
    cin>>n;

    string s;
    cin>>s;

    if(n==1){
        cout<<"YES"<<endl;
        return;    
    }
    unordered_map<char,int>mp;
    for(ll i=0;i<s.size()-1;i++){
        if(mp[s[i]]>0){
            cout<<"NO"<<endl;
            return;
        }
        mp[s[i]]++;
        while(s[i]==s[i+1] && i<s.size()-1){
            mp[s[i]]++;
            i++;
        }
        // i--;
    }
    ll i=s.size()-2;
    if(s[i]!=s[i+1] && mp[s[s.size()-1]]>0){
            cout<<"NO"<<endl;
            return;
    }

    cout<<"YES"<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t=1; 
    cin >> t;
    while(t--){
        solve();
    }

}