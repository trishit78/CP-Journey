// #include <bits/stdc++.h>
// using namespace std;


// #define int long long
// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     int a =-1;
//     int flag =1;
   
//     while(n--){
//        int temp = n%10;
//         n=n/10;
//         if(temp<=a){
//             flag =0;
//             break;
//         }
//         else
//         a=temp;
//     }
//     if(flag==0) cout<<"No"<<endl;
//     else  cout<<"Yes"<<endl;
// }



#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a =-1;
    int flag =1;
    vector<int> arr(n);
    while(n--){
       int temp = n%10;
        n=n/10;
        arr.push_back(temp);
    }
    sort(arr.rbegin(),arr.rend());
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1]){
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"Yes"<<endl;
    if(flag==0)  cout<<"No"<<endl;
    
}