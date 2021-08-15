#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n;
    while(start <= end){
        int mid = (start + end) / 2;
        if(key < arr[mid]){
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {5,7,13,45,223};
    int key;
    cin>>key;
    cout<<BinarySearch(arr, 5, key)<<endl;
    return 0;
}