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
        int minNo = arr[i];
        rep(j,i+1,n){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }

        }
    }

    rep(i,0,n){
        cout<<arr[i]<<" ";
    }


    return 0;
}