#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


string getPalindrome(string str){
    unordered_map<char,int> mp;
    int oddCount=0;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    char oddChar;
    for(auto x:mp){
        if(x.second %2 !=0){
            oddCount++;
        oddChar=x.first;
        }
    }

    if(oddCount>1 || oddCount==1 && ((str.length())%2==0)){
        return "NO PALINDROME";
    }

    string firstHalf=" " , secondHalf=" ";
    for(auto x: mp){
        string s(x.second/2, x.first);
        firstHalf= firstHalf+s;
        secondHalf= s+secondHalf;

    }
    return (oddCount ==1) ? (firstHalf+oddCount+secondHalf) : (firstHalf+secondHalf);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
        string s;
        cin>>s;
        cout<<getPalindrome(s)<<endl;
    
}