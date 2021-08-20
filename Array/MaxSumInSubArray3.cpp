#include <bits/stdc++.h>
using namespace std;

// I/P 
//4
//-1 4 7 2
//O/P
// 13

// In O(n)
// Using Kadane's Algorithm

int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i = 0; i < n ; i ++)
        cin>>a[i];

    int CurSum  = 0;
    int maxSum = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        CurSum += a[i];
        if(CurSum < 0){
            CurSum = 0;
        }
        maxSum = max(maxSum, CurSum);
    }
    cout<<maxSum<<endl;
    return 0;
}