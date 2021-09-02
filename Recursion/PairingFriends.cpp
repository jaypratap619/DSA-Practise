//Find number of ways in which n friends can be single or paired
#include <bits/stdc++.h>
using namespace std;

int PairingFriends(int n){
    if(n == 0 || n == 1 || n == 2){
        return n;
    }
        // Not Pairing + Pairing
    return PairingFriends(n-1) + (n-1)*PairingFriends(n-2);   //Multiplying with n-1 because we have n-1 ways to pair a person with others


}

int main(){
    cout<<PairingFriends(4)<<endl;
    return 0;
}