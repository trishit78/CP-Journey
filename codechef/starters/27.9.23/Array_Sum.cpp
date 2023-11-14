#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        // Check if it's possible to create the array
        if (n % 2 != 0 || k % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        int half_n = n / 2;
        int half_sum = k / 2;

        // Initialize the array with all elements as 1
        for (int i = 0; i < n; i++) {
            if (i < half_n) {
                cout << 1 << " ";
            } else {
                cout << 2 << " ";
            }
        }
        

        cout << endl;
    }

    return 0;
}
