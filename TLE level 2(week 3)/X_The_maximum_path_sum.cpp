#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }


     for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
 
            // When all paths are possible
            if (j > 0 && j < m - 1)
                mat[i][j] += max(mat[i - 1][j],
                             max(mat[i - 1][j - 1],
                             mat[i - 1][j + 1]));
 
            // When diagonal right is not possible
            else if (j > 0)
                mat[i][j] += max(mat[i - 1][j],
                            mat[i - 1][j - 1]);
 
            // When diagonal left is not possible
            else if (j < m - 1)
                mat[i][j] += max(mat[i - 1][j],
                            mat[i - 1][j + 1]);
 
            // Store max path sum
        }
    }
    int res = 0;
    for (int j = 0; j < m; j++)
        res = max(mat[n-1][j], res);
    
    cout<<res<<endl;
    

}