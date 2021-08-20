#include <bits/stdc++.h>
using namespace std;

//O(n^2)
bool PairSum(int a[], int n, int k){
    for(int i = 0; i < n-1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(a[i] + a[j] == k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}


//O(n)
// Only works with Sorted Array else you have to sort first.
bool PairSumOptimise(int a[], int n, int k){

    int low = 0;
    int high = n - 1;

    while(low<high){
        if(a[low] + a[high] < k){
            low++;
        }
        else if(a[low] + a[high] > k){
            high--;
        }
        else{
            return true;
        }
    }
    return false;
}

int main(){
   int arr[] = { 2,4,7,11,14,16,20,21};
   int k = 31;
    cout<<PairSum(arr, 8, k)<<endl;  
    cout<<PairSumOptimise(arr, 8, k)<<endl;  
    return 0;
}