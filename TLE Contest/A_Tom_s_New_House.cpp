// #include <bits/stdc++.h>
// using namespace std;


// #define int long long
// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// bool solve(int n, vector<int> &arr,int idx,int curr){
//     if(idx==n)
//     return curr=0;
//     if(solve(n,arr,idx+1,(curr+arr[idx])%360))
//     return true;
//     if(solve(n,arr,idx+1,(curr-arr[idx]+360)%360))
//     return true;
//     else
//     return false;

// }

// signed main()
// {
//     // ios::sync_with_stdio(false);
//     // cin.tie(NULL);
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
   
//     if(solve(n,arr,0,0)){
//         cout<<"YES"<<endl;
//     }
//     else
//     cout<<"NO"<<endl;

// }


#include <bits/stdc++.h>
 using namespace std;


#define int long long


bool solve(int n, vector<int>& arr, int idx, int curr) {
    if (idx == n) {
        return curr == 0;
    }
    if (solve(n, arr, idx + 1, (curr + arr[idx]) % 360)) {
        return true;
    }
    if (solve(n, arr, idx + 1, (curr - arr[idx] + 360) % 360)) {
        return true;
    }

    return false;
}

signed main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (solve(n, arr, 0, 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
