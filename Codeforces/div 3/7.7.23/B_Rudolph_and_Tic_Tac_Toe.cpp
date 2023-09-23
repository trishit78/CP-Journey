#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


bool check(vector<vector<char>> &field,char s){
    for(int i=0;i<3;i++){
        if(field[i][0] == s && field[i][1]==s && field[i][2]==s){
            return true;
        }
    }

    for(int i=0;i<3;i++){
        if(field[0][i] == s && field[1][i]==s && field[2][i]==s){
            return true;
        }
    }

    if(field[0][0] ==s && field[1][1]==s && field[2][2]==s)
    return true;
    if(field[0][2]==s && field[1][1] ==s && field[2][0])
    return true;


    return false;
}

string solve(vector<vector<char>> &field){
    if(check(field,'O')){
        return "O";
        
    }
    
    if(check(field,'X')){
        return "X";
        
    }
    
    if(check(field,'+')){
        return "+";
        
    }
    return "DRAW";
    
    

}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<vector<char>> field(3,vector<char>(3));
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>field[i][j];
            }
        }
        string ans = solve(field);
        cout<<ans<<endl;
    }
}