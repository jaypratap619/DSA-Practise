#include <bits/stdc++.h>
using namespace std;

// I/P 
//4
//-1 4 7 2
//O/P
// 13

// In O(n^2)
// Using Cumaltive Sum approach

int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i = 0; i < n ; i ++)
        cin>>a[i];

    int cumSum[n+1];
    cumSum[0] = 0;
    for(int i = 1; i <= n ; i ++)
        cumSum[i] = cumSum[i-1] + a[i-1];
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++ ){
            sum = cumSum[j+1] - cumSum[i+1];
            maxSum = max(sum,maxSum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}