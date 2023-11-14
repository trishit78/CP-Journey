#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;



long long gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    b.push_back(a[0]);
    for (int i = 0; i < n - 1; i++)
    {
        int s = lcm(a[i], a[i + 1]);
        b.push_back(s);
    }
    b.push_back(a[n - 1]);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != gcd(b[i], b[i + 1]))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc=1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}

