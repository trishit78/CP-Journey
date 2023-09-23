#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> b[i];
        }

        std::vector<int> a;
        a.push_back(b[0]);

        for (int i = 1; i < n; ++i) {
            if (b[i] >= b[i - 1]) {
                a.push_back(b[i]);
            }
        }

        std::cout << a.size() << std::endl;
        for (int num : a) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
