#include <iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i = 1; i <= n ; i++){
        ans *= i;
    }

    return ans;
}

int Combination(int n, int r){
    return fact(n) / ( fact(n-r) * fact(r) );
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<Combination(n,r)<<endl;
    return 0;
}