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
        int hc,dc;
        cin>>hc>>dc;
        int hm,dm;
        cin>>hm,dm;
        int k,w,a;
        cin>>k>>w>>a;
        int flag =0;
        for(int i=0;i<=k;i++){
            int ca = i;
            int cb = k-i;

            int newattack = dc+ ca*w;
            int newhealth = hc+ cb*a;

            int monsterAttack, characterAttack;
            if(newhealth%dm == 0)
            monsterAttack = newhealth/dm ;
            else
            monsterAttack = newhealth/dm +1 ;

            if(hm%newattack == 0)
            characterAttack = hm/newattack;
            else
            characterAttack = hm/newattack+1;

            if(characterAttack>=monsterAttack){
            flag =1;
            break;
            }
        }
        if(flag == 1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}