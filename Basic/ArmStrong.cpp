#include <iostream>
#include <cmath>
using namespace std;

int order(int n){
    int o = 0;
    while(n > 0){
        o++;
        n /= 10;
    }
    return o;
}

bool isArmstrong(int n){
    int sum = 0;
    int o = order(n);
    int originalN = n;
    while(n > 0){
        int rem = n % 10;
        sum = sum + round(pow(rem, o));
        n /= 10;
    }
    return sum == originalN;
}

int main(){
    int n;
    cin>>n;
    isArmstrong(n) ? cout<<"Armstrong"<<endl : cout<<"Not an Armstrong"<<endl;
    return 0;
}