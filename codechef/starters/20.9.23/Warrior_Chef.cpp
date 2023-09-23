// #include <bits/stdc++.h>
// using namespace std;


// #define int long long
// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n,h;
//         cin>>n>>h;
//         vector<int> arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int diff =0;
//         for(int i=0;i<n;i++){
//            diff =h-arr[i]
//         }







//         int diff=i-sum;
//         if(diff>0){
//             cout<<0<<endl;
//         }
//         else if(diff<=0){
//             cout<<abs(diff)+1<<endl;
//         }
//     }
// }








#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, h;
        cin >> n >> h;
        vector<int> enemies(n);

        for (int i = 0; i < n; i++) {
            cin >> enemies[i];
        }

        // Sort the enemies in decreasing order of strength
        sort(enemies.rbegin(), enemies.rend());

        int left = 1; // Minimum resistance is 1
        int right = enemies[0]; // Maximum resistance is the strength of the strongest enemy
        int result = right; // Initialize the result with the maximum resistance

        while (left <= right) {
            int mid = (left + right) / 2;
            long long total = 0;

            // Calculate how many enemies Chef can defeat with resistance = mid
            for (int i = 0; i < n; i++) {
                if (enemies[i] <= mid) {
                    break;
                }
                total += (enemies[i] - mid + 1);
            }

            // If Chef can defeat all enemies with resistance = mid, update the result
            if (total <= h) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}
