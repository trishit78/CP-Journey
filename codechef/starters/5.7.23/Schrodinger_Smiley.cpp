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
        char str[n];
        int colon = 0,right=0,left=0;
        for(int i=0;i<n;i++){
            cin>>str[i];
           
        }
        int count=0;
        for(int i=0;i<n;i++){
        if(str[i] == ':' && str[i+1] == ')'){
            i++;
        while( i<n  && str[i]==')'){
            i++;
        }
        if(str[i] ==':'){
        count++;
        i--;
        }
            }
        }
        
     cout<<count<<endl;

    }
}







// #include <iostream>
// using namespace std;

// int main() {
//   int T, N;
//   string S;

//   cin >> T;
//   for (int i = 0; i < T; i++) {
//     cin >> N >> S;
//     int count = 0;
//     for (int j = 0; j < N; j++) {
//       if(S[i] ==':' && s{i+1}== ")")
//       {
//         while( i<n  && s[i]==')'){
//             i++;
//         }
//         if(s[i] ==':'){
//         count++;
//         i--;
//         }
//       }

//     cout << count << endl;
//   }
//   return 0;
// }