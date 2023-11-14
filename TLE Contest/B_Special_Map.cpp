#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, m, k;
        std::cin >> n >> m >> k;

        // Calculate the maximum number of edges in a fully connected graph
        long long max_edges = static_cast<long long>(n) * (n - 1) / 2;

        if (m >= max_edges && (k - 1) <= n - 1) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
