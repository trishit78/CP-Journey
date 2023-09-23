#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;



bool checkCol(vector<vector<char>> &arr,int n,int m){
    if(n==0)    return false;

 for (int col1 = 0; col1 < m - 3; ++col1) {
        if ((arr[col1][0]) == 'v' ) {
            for (int col2 = col1 + 1; col2 < m - 2; ++col2) {
                if ((arr[col2][0]) == 'i') {
                    for (int col3 = col2 + 1; col3 < m - 1; ++col3) {
                        if ((arr[col3][0]) == 'k') {
                            for (int col4 = col3 + 1; col4 < m; ++col4) {
                                if ((arr[col4][0]) == 'a') {
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return false;
}
bool checkRow(vector<vector<char>> &arr,int n,int m){
    if(n==0)    return false; 
    for (int col1 = 0; col1 < m - 3; ++col1) {
        if (arr[0][col1] == 'v') {
            for (int col2 = col1 + 1; col2 < m - 2; ++col2) {
                if (arr[0][col2] == 'i') {
                    for (int col3 = col2 + 1; col3 < m - 1; ++col3) {
                        if (arr[0][col3] == 'k') {
                            for (int col4 = col3 + 1; col4 < m; ++col4) {
                                if (arr[0][col4] == 'a') {
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<char>> arr(n,vector<char> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        if(checkRow(arr,n,m)||checkCol(arr,n,m)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}