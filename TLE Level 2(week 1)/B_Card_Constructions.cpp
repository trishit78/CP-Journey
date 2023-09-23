#include <bits/stdc++.h>
typedef long long ll;
#define endl "\n"
using namespace std;

int solve(int n, int c){
    int card = 2, sum  = 2, t;

    while (sum <= n) {
        t = sum;
        card+=3;
        sum += card;
    }
    c++;
    if (sum > n) {
        n -= t;
    }
    else {
        n -= sum;
    }
    if (n < 2) return c;
    else return solve(n,c);
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    
    while (t--) {
        int n, c = 0;
        cin >> n;
        if (n < 2) {
            cout << 0 << endl;
        }
        else {
            c = solve (n,c);
            cout << c << endl;
        }
    }

    return 0;
}