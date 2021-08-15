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
   
    int ans = 2;
    int currAns = 2;
    int pd = arr[1] - arr[0];

    rep(i, 2 , n){
        if(pd == arr[i] - arr[i-1]){
            currAns++;
        }
        else{
            pd = arr[i] - arr[i-1];
            currAns = 2;
        }
        ans = max(currAns, ans);
    }

    cout<<ans<<endl;

    return 0;
}