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
    int mCount = 0, cCount = 0;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;

        if (a > b)
        {
            mCount++;
        }

        else if (b > a)
        {
            cCount++;
        }
    }
    if (mCount > cCount)
        cout << "Mishka" << endl;
    else if (cCount > mCount)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
}