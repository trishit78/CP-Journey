
#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


int minRunwaysRequired(int N, vector<int> &vec1, vector<int> &vec2)
{
    unordered_map<int, int> mp;

    for (int num : vec1)
    {
        mp[num]++;
    }
    for (int num : vec2)
    {
        mp[num]++;
    }

    int max = 0;
    
    for (auto &pair : mp)
    {
        if (pair.second > max)
        {
            max = pair.second;
            
        }
    }

    return max;
}



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N;
        cin >> N;
        vector<int> arrivals(N);
        vector<int> departures(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arrivals[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> departures[i];
        }
        int result = minRunwaysRequired(N, arrivals, departures);
        cout << result << endl;
    }
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int minRunwaysRequired(int N, vector<int> &vec1, vector<int> &vec2)
// {
//     unordered_map<int, int> frequencyMap;

//     for (int num : vec1)
//     {
//         frequencyMap[num]++;
//     }

//     // Count the frequency of numbers in the second vector
//     for (int num : vec2)
//     {
//         frequencyMap[num]++;
//     }

//     int maxFrequency = 0;
//     int maxNumber = 0;

//     // Find the maximum frequency and corresponding number
//     for (const auto &pair : frequencyMap)
//     {
//         if (pair.second > maxFrequency)
//         {
//             maxFrequency = pair.second;
//             maxNumber = pair.first;
//         }
//     }

//     return maxNumber;
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N;
//         cin >> N;
//         vector<int> arrivals(N);
//         vector<int> departures(N);
//         for (int i = 0; i < N; i++)
//         {
//             cin >> arrivals[i];
//         }
//         for (int i = 0; i < N; i++)
//         {
//             cin >> departures[i];
//         }
//         int result = minRunwaysRequired(N, arrivals, departures);
//         cout << result << endl;
//     }

//     return 0;
// }
