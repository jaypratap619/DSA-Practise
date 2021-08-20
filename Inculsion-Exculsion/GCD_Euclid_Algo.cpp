#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int rem = a % b;   // we can also do a-b that will take more iterations
        a = b;
        b = rem;
    }

    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}