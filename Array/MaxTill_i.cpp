#include <iostream>
#include <climits>
#define rep(i,a,b) for(int i = a; i < b ; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
   
   int mx = INT_MIN;

    rep(i,0,n){
        mx = max(arr[i], mx);
        cout<<mx<<" ";
    }

    return 0;
}