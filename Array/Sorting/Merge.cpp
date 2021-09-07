#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int temp1[n1], temp2[n2];  // Creating two temporary arrays
    //Copying the elements in temporary arrays
    for (int i = 0; i < n1; i++)
    {
        temp1[i] = arr[l+i];
    }

    for (int j = 0; j < n2; j++)
    {
        temp2[j] = arr[mid+1+j];
    }
    
    int i = 0, j = 0, k = l;  // for traversing temp1,temp2 and original array respectively

    // Merging two sorted array in original array

    while(i < n1 && j < n2){
        if(temp1[i] < temp2[j]){
            arr[k] = temp1[i];
            k++; i++;
        }
        else{
            arr[k] = temp2[j];
            k++; j++;
        }
    }

    while(i < n1){
        arr[k] = temp1[i];
        k++; i++;
    }
    while(j < n2){
        arr[k] = temp2[j];
        k++; j++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l < r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1, r);
        merge(arr,l,mid,r);
    }
}

int main(){
    int arr[] = {7, 12, 64, 9, 2, 4, 45, 20, 6, 11};
    mergeSort(arr, 0, 9);
    for (int i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}