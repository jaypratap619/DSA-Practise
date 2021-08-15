#include <iostream>
using namespace std;

const int N = 1e5+2, MOD = 1e9 + 7;
int dp[N] = {-1};

int main(){
    int n;
    cin>>n;

    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2 ; i <= n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout<<dp[n]<<endl;
    return 0;
}