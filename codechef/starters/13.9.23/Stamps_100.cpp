



#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


string makeLexicographicallySmallest(string S)
{
    int N = S.length();
    int i = 0;

    while (i < N - 2)
    {
        if (S[i] == '1' && S[i + 1] == '0' && S[i + 2] == '0')
        {
            S.replace(i, 3, "100");
            i += 3;
        }
        else
        {
            i += 1;
        }
    }

    // Replace any remaining "100" substrings with "0"
    size_t found = S.find("100");
    while (found != string::npos)
    {
        S.replace(found, 3, "0");
        found = S.find("100");
    }

    return S;
}


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
        string S ;
        cin>>S;
        string result = makeLexicographicallySmallest(S);
        cout << result << endl; 

    }
}