#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int solve(int n, vector<int>&arr){
    map<int,int> mp;
    int maxi =0;
    for(int i=0;i<n;i++){
        int id = arr[i];

        if(mp.count(id)>0){
            mp[id]--;
        
         if(mp[id]==0){
            mp.erase(id);
        }
        }
        else{
            mp[id]++;
        }
        int count = mp.size();
        maxi = max(maxi,count);
        

    }
        return maxi;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

         int ans = solve(n,arr);
         cout<<ans<<endl;
    }
}


// #include <iostream>
// #include <vector>
// #include <map>

// using namespace std;

// int findMaxPeopleInOffice(int N, vector<int>& swipes) {
//     map<int, int> officeCount; // Map to store the count of people in the office at any given time
//     int maxCount = 0; // Variable to track the maximum count of people in the office

//     for (int i = 0; i < N; i++) {
//         int id = swipes[i];

//         // If the ID is already present in the map, it means the person is swiping out
//         if (officeCount.count(id) > 0) {
//             officeCount[id]--;
//             if (officeCount[id] == 0) {
//                 officeCount.erase(id); // Remove the ID from the map if the count becomes zero
//             }
//         } else { // If the ID is not present in the map, it means the person is swiping in
//             officeCount[id]++;
//         }

//         int currentCount = officeCount.size();
//         maxCount = max(maxCount, currentCount);
//     }

//     return maxCount;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;
//         vector<int> swipes(N);
//         for (int i = 0; i < N; i++) {
//             cin >> swipes[i];
//         }
//         cout << findMaxPeopleInOffice(N, swipes) << endl;
//     }

//     return 0;
// }
