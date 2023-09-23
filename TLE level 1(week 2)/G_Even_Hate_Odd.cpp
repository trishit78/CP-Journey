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
    
    int odd =0,even =0;
    while (tc--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

            if(v[i]%2==0)
            even++;
            else
            odd++;
        }

        if(n%2 !=0){
            cout<<-1<<endl;
            break;
        }

        cout<<abs(odd-even)/2<<endl;

    }
}






#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){

    ll n;
    cin>>n;

    vector<ll> v(n);

    ll even=0,odd=0;

    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    if(n%2){
        cout<<"-1"<<endl;
        return;
    }

    cout<<abs(even-odd)/2<<endl;

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