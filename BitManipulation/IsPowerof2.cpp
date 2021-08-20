// To check whether a number is powerf of 2
#include <iostream>
using namespace std;

bool isPowerof2(int n){
    // n & n-1 wil change the rightmost 1 to 0
    //return ( (n & n-1) == 0); //Will not work for n = 0
    
    return ( n && (n & n-1) == 0);  //This will work for n=0 also.
}

int main(){
    cout<<isPowerof2(8);
    return 0;
}