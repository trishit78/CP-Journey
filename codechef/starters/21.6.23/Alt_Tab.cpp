#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

string getAltTabOrder(int N) {
    stack<string> programStack;

    for (int i = 0; i < N; i++) {
        string programName;
        cin >> programName;

        programStack.push(programName.substr(programName.length() - 2));
    }

    string order;

    while (!programStack.empty()) {
        order += programStack.top();
        programStack.pop();
    }

    //reverse(order.begin(), order.end());

    return order;
}

int main() {
    int N;
    cin >> N;

    string altTabOrder = getAltTabOrder(N);
    cout << altTabOrder << endl;

    return 0;
}
