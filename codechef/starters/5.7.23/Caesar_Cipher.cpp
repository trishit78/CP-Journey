#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string getRotKCipher(string &S,string &T, string &U)
{
    int N = S.length();
    vector<int> shifts(N);
 for (int i = 0; i < N; i++)
    {
        int diff = T[i] - S[i];
        shifts[i] = (diff+26) % 26;
    }

    string cipher_U=U;
    for (char &c :cipher_U)
    {
        int shift = shifts[(c - 'a') % N];
        c = 'a' + (c - 'a' + shift) % 26;
    }

    return cipher_U;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N;
        string S, T, U;
        cin >> N >> S >> T >> U;

        string cipher_U = getRotKCipher(S, T, U);
        cout << cipher_U << endl;
    }
}


