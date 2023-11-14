#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;




int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

void printPascalsTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numRows - i - 1; j++) {
            std::cout << "  ";  // Print leading spaces for formatting
        }

        for (int j = 0; j <= i; j++) {
            int coef = binomialCoefficient(i, j);
            std::cout << coef;
            if (j < i) {
                std::cout << "   ";  // Print spaces between coefficients
            }
        }

        std::cout << std::endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter the Row no: "<<endl;
    cin>>n;
    if(n==0){
        cout<<"Wrong input"<<endl;
    }
    if(n<0){
        cout<<"This is a negetive no:  Wrong input"<<endl;
    }
    if(n>9){
        cout<<"Input is too large , input can be less than 10"<<endl;
    }
    if(!isdigit(n)){
        cout<<"Input is not a digit"<<endl;
    }
    if(!(n==floor(n))){
        cout<<"This a float number"<<endl;
    }
    else{
         printPascalsTriangle(n);
    }
}