#include <bits/stdc++.h>
using namespace std;

int TilingWays(int n){
    if(n <=2) {
        return n;
    }
    return TilingWays(n-1) + TilingWays(n-2);
}

int main(){
    cout<<TilingWays(4)<<endl;
    return 0;
}