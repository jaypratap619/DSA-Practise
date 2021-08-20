#include <iostream>
using namespace std;

const int N = 1e5+2, MOD = 1e9 + 7;
int dp[N] = {-1};

int fibbDP1(int n){
    if(n < 2){
        return n;
    }
    if(!dp[n] == -1){
        return dp[n];
    }
    dp[n] = fibbDP1(n-1) + fibbDP1(n-2);
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<fibbDP1(n)<<endl;
    return 0;
}