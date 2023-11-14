#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26); // Frequency of each lowercase letter

        for (char ch : s) {
            freq[ch - 'a']++;
        }

       int rem =n-k;
       for(auto i:freq){
            if(i==0)  continue;

            int x = min(rem, (i/2)*2);
            rem -=x;
            i-=x;
            if(rem%2 && i){
                rem--;
            }
       }
       if(!rem) cout<<"YES"<<endl;
       else  cout<<"NO"<<endl;
    }

    return 0;
}
