#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

       if(k==4){
        int mini = k;int ans=2;
        for(int i=0;i<n;i++){
            if(a[i]%4==0){
                mini =0;
                break;
            }
            else{
                if(mini>k-a[i]%k){
                    mini =k-a[i]%k;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                ans = min(ans-1,0);
            }
        }
        cout<<min(mini,ans)<<endl;
       }

        else{
            int mini =k;
            for(int i=0;i<n;i++){
                if(a[i]%k==0){
                    mini =0;
                    break;
                }
                else{
                    if(mini>k-a[i]%k){
                        mini = k-a[i]%k;
                    }
                }
            }
            cout<<mini<<endl;
        }



       
    }
    return 0;
}
