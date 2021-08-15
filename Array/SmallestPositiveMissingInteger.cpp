// Find the smallest positive missing integer


#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i = x; i < y ; i++)

const int N = 1e6 + 2;
bool check[N];

int main(){
    int n;
    cin>>n;
    int a[n];
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,N){
        check[i] = false;
    }
    rep(i, 0 , n){
        if(a[i] >= 0)
            check[a[i]] = true; 
    }
    int ans = -1;

    rep(i,0,N){
        if(!check[i])
        {
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}