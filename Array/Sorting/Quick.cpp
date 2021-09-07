#include <iostream>
using namespace std;

int partition(int arr[], int l, int r){
    int pi = arr[r];
    int i = l-1;   // It will point to the element just left to the pivot, after placing the pivot at correct position

    for(int j = l ; j < r ; j++){
        if(arr[j] < pi){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1], arr[r]);   // Placing the pivot at correct postion
    return i + 1;

}

void quickSort(int arr[], int l, int r){
    if(l < r){
        int pi = partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}

int main(){
    int arr[] = {45,2,7,8,27,4,1};
    quickSort(arr,0,6);
    for (int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}