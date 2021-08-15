#include <iostream>
#include <math.h>
using namespace std;

bool IsPrime(int n){
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    IsPrime(n) ? cout<<"prime"<<endl : cout<<"Not Prime" <<endl;
    return 0;
}