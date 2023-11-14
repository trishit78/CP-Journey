#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
const int N = 2e7+5;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;cin>>n;
        int arr[N];
        vector<int> odd;
        vector<int> even;
        for(int i=1;i<=2*n;i++){
            cin>>arr[i];
            if(arr[i]%2==1)
                odd.push_back(i);
            else
                even.push_back(i);
        
        }

        vector<pair<int,int>> ans;
        for(int i=0;i+1<odd.size();i+=2){
            ans.push_back({odd[i],odd[i+1]});
        }
        for(int i=0;i+1<even.size();i+=2)
            ans.push_back({even[i],even[i+1]});

        for (int i = 0; i < n-1; i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
        
}
        return 0;
    }


// #include <bits/stdc++.h>
// using namespace std;
 
// #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl "\n"
// #define int long long

// const int N = 2e5 + 5;

// int n;
// int a[N];

// int32_t main()
// {
// 	IOS;
// 	int t;
// 	cin >> t;
// 	while(t--)
// 	{
// 		cin >> n;
// 		vector< int > even, odd;
// 		for(int i = 1; i <= 2 * n; i++)
// 		{
// 			cin >> a[i];
// 			if(a[i] % 2)
// 				odd.push_back(i);
// 			else
// 				even.push_back(i);
// 		}
// 		vector< pair< int, int > > ans;
// 		for(int i = 0; i + 1 < odd.size(); i += 2)
// 			ans.push_back({odd[i], odd[i + 1]});
// 		for(int i = 0; i + 1 < even.size(); i += 2)
// 			ans.push_back({even[i], even[i + 1]});
// 		for(int i = 0; i < n - 1; i++)
// 			cout << ans[i].first << " " << ans[i].second << endl;
// 	}
// 	return 0;
// }