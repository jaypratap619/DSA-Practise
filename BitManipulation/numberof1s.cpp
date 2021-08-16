// To count number of 1 in a binary number
#include <iostream>
using namespace std;

int numberOfOnes(int n){
    int count = 0;
    while(n != 0){
        n = n & n-1; //After performing this the rightmost 1 becomes 0
        count++;
    }
    return count;
}

int main(){
    cout<<numberOfOnes(5);
    return 0;
}