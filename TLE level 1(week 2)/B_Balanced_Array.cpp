#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){

    ll n;
    cin>>n;

    ll ans=n/2;
    if(ans%2==0){
        cout<<"YES"<<endl;
        // vector<int> v;
        ll cnt=2;
        ll evenSum=0;
        for(ll i=0;i<n/2;i++){
            // v.push_back(cnt);
            cout<<cnt<<" ";
            evenSum+=cnt;
            cnt+=2;
        }
        cnt=1;
        ll oddSum=0;
        for(ll i=0;i<n/2-1;i++){
            // v.push_back(cnt);
            cout<<cnt<<" ";
            oddSum+=cnt;
            cnt+=2;
        }

        // v.push_back(evenSum-oddSum);

        cout<<evenSum-oddSum<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}