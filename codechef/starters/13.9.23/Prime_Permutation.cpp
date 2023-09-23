#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

// Function to find a permutation that satisfies the condition
vector<int> findPermutation(int N)
{
    vector<int> permutation(N);
    vector<int> ans;
    // Initialize the permutation with 0s

    permutation.push_back(N - 1);
    permutation.push_back(N);

    for (int i = 0; i < N - 2; i++)
    {
        permutation.push_back(i + 1);
    }

    // Check if the permutation satisfies the condition
    for (int i = 0; i < N; i++)
    {
        if (isPrime(abs(permutation[i] - (i + 1))))
        {
            // If not, return an empty vector to indicate failure
            ans.push_back(permutation[i]);
        }
    }

    return ans;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> permutation = findPermutation(N);

        if (permutation.empty())
        {
            cout << "-1\n"; // No valid permutation found
        }
        else
        {
            for (int i = 0; i < N; i++)
            {
                cout << permutation[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}


vector<int> solve(int n){



}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;

        vector<int> per = solve(n);

        if(per.empty()){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<per[i]<<" ";
            }
            cout<<endl;
        }

    }
}
