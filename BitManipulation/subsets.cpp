// To print all substes of an array
#include <iostream>
using namespace std;

void subsets(int arr[], int n){
    // from  0 to 2^(n) - 1
    for(int i = 0 ; i < (1<<n) ; i++){
        for (int j = 0 ; j < n ; j++){
            // To check jth bit is set or not
            if(i & (1 << j)){
            // If jth bit is set then print element which is at jth index in array
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int arr[]= {1,2,3,4};
    subsets(arr,4);
    return 0;
}