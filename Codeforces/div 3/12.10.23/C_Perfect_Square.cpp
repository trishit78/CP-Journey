#include <iostream>
#include <vector>
#include <string>
using namespace std;

int minOperationsForPerfectSquare(int n, vector<string> matrix) {
    int operations = 0;

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            vector<int> letterCount(26, 0);

            // Count the frequency of each letter in the four corners
            letterCount[matrix[i][j] - 'a']++;
            letterCount[matrix[i][n - j - 1] - 'a']++;
            letterCount[matrix[n - i - 1][j] - 'a']++;
            letterCount[matrix[n - i - 1][n - j - 1] - 'a']++;

            // Calculate the number of operations needed to make these letters the same
            int maxCount = 0;
            for (int k = 0; k < 26; k++) {
                maxCount = max(maxCount, letterCount[k]);
            }

            // Calculate the number of operations needed to make all four corners the same
            operations += 4 - maxCount;
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> matrix(n);
        for (int i = 0; i < n; i++) {
            cin >> matrix[i];
        }
        int operations = minOperationsForPerfectSquare(n, matrix);
        cout << operations << endl;
    }

    return 0;
}
