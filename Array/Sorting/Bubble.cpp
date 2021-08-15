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
    rep(i,0,n-1){
       
        rep(j,0,n-i){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }

    rep(i,0,n){
        cout<<arr[i]<<" ";
    }


    return 0;
}