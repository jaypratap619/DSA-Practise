#include <iostream>
using namespace std;

int BinToDec(int n){
    int dec = 0;
    int i = 1;

    while(n > 0){
        int lastDigit = n % 10;
        dec += lastDigit * i;
        i = i * 2;
        n = n/10;
    }

    return dec;
}

int main(){
    int n;
    cin>>n;
    cout<<BinToDec(n)<<endl;
    return 0;
}