// Output the sum of all subArrays

#include <iostream>
#define rep(i,a,b) for(int i = a; i < b ; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
   

    int sum;

    rep(i,0,n){
        sum = 0;
        rep(j, i, n){
            sum += arr[j];
            cout<<sum<<" "; 
        }
    }

    return 0;
}