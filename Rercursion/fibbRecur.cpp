#include <iostream>
using namespace std;

int fibbRecur(int n){
    if(n < 2){
        return n;
    }
    return fibbRecur(n-1) + fibbRecur(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibbRecur(n)<<endl;
    return 0;
}