#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> claims(n);
        map<int, long long> companions_needed;
        
        for (int i = 0; i < n; i++) {
            cin >> claims[i];
            companions_needed[claims[i]]++;
        }
        
        long long total_ways = 1;
        
        for (auto it = companions_needed.begin(); it != companions_needed.end(); it++) {
            int required_companions = it->first;
            long long villagers_with_condition = it->second;
            
            if (required_companions == 0) {
                total_ways *= (villagers_with_condition * (villagers_with_condition - 1) / 2);
            } else {
                if (companions_needed.find(required_companions) != companions_needed.end()) {
                    total_ways *= pow(2, villagers_with_condition) - 1;
                }
            }
        }
        
        cout << total_ways << endl;
    }
    
    return 0;
}
