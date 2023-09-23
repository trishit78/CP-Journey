#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

string convertToPalindrome(string s) {
    int n = s.length();
    for (int i = 1; i < n - 1; i++) {
        if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            string left = s.substr(0, i);
            string right = s.substr(i + 2);
            return left + right;
        }
    }
    return "";
}

string canConvertToPalindrome(string s) {
    if (isPalindrome(s)) {
        return "YES";
    }
    string converted = convertToPalindrome(s);
    if (!converted.empty() && isPalindrome(converted)) {
        return "YES";
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << canConvertToPalindrome(s) << endl;
    }

    return 0;
}
