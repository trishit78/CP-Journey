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
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        vector<int> a;
        a.push_back(a1);
        a.push_back(a2);
        a.push_back(a3);

        sort(a.rbegin(),a.rend());

        // for(int i=0;i<a.size();i++)
        //     cout<<a[i];
        //     cout<<endl;

        vector<int> b;
        b.push_back(b1);
        b.push_back(b2);
        b.push_back(b3);

        sort(b.rbegin(),b.rend());

        string num1;
        for (int i : a) {
            num1 += to_string(i);
        }

        string num2;
        for (int i : b) {
            num2 += to_string(i);
        }


        int x = stoi(num1);
        int y= stoi(num2);
        
        if(x>y)  cout<<"Alice"<<endl;
        else if( x<y)  cout<<"Bob"<<endl;
        else
            cout<<"Tie"<<endl;

    }
}