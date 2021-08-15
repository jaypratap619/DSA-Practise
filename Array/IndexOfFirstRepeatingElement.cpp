// Minimum Index of First repeating element
// I/P -> 1 5 3 4 3 5 6
// O/P -> 1

#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a; i < b ; i++)


const int N = 1e6+2;
int idx[N];

int main(){
    int n;
    cin>>n;
    int a[n];
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i, 0 , N){
        idx[i] = -1;
    }

    int minIdx = INT_MAX;

    rep(i,0,n){
        if(idx[a[i]] != -1){
            minIdx = min(minIdx, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }

    if(minIdx == INT_MAX)
        cout<<"-1"<<endl;
    else
        cout<<minIdx<<endl;
    return 0;
}