#include <iostream>
using namespace std;

// n =5
//
// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

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
void PascalTraingle(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++ ){
            cout<<Combination(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    PascalTraingle(n);
    return 0;
}