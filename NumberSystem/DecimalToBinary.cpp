#include <iostream>
using namespace std;

int DecToBinary(int n){
    int bin = 0;
    int i = 1;
    while(n>0){
        int rem = n%2;
        n = n / 2;
        bin += i * rem;
        i = i*10;
    }
    return bin;
}

int main(){
    int n;
    cin>>n;
    cout<<DecToBinary(n)<<endl;
    return 0;
}