#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5] = {5,12,4,13,7};
    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    for(int i = 0 ; i< 5; i ++){
        if(minNo > arr[i])   minNo = arr[i];
        if(maxNo < arr[i])   maxNo = arr[i];
    }
    cout<<minNo << " "<< maxNo;
    return 0;
}