#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,0);

    dp[1]=0;
    dp[2]=1;

    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    cout<<dp[n]<<endl;;
}
