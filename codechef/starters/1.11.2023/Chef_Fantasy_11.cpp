#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n*fact(n-1);
}
 
int nPr(int n, int r)
{
    return fact(n)/fact(n-r);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n ;
	cin>>n;
	cout<<nPr(n,2)<<endl;
    }
}