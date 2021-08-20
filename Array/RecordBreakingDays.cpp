#include <iostream>
#define rep(i,a,b) for(int i = a; i < b ; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n + 1];
    arr[n] = -1;
    rep(i,0,n){
        cin>>arr[i];
    }
   
    int ans = 0;

    int mx = -1;

    rep(i, 0 , n){

        if(arr[i] > mx && arr[i] > arr[i+1])
            ans++;

        mx = max(mx, arr[i]); 
    }

    cout<<ans<<endl;

    return 0;
}