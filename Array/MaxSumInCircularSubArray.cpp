#include <bits/stdc++.h>
using namespace std;

// I/P 
//7
//4 -4 6 -6 10 -11 12
//O/P
//22

//For Non wrap Sum use Kadane's algorithm

// For Wrap sum 
// Ans = Total Sum of Array - Sum of Non Contributing Element

// To find Sum of Non Contributing Element, flip the sign of all elements in array and use Kadane's alogorithm

// Finally compare both Wrap Sum and Non Wrap Sum

int kadane(int a[], int n){
    int maxSum = INT_MIN;
    int CurSum  = 0;

    for(int i = 0 ; i < n ; i++){
        CurSum += a[i];
        if(CurSum < 0){
            CurSum = 0;
        }
        maxSum = max(maxSum, CurSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i = 0; i < n ; i ++)
        cin>>a[i];

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(a, n);

    int totalSum = 0;

    for(int i = 0 ; i < n ; i++){
        totalSum += a[i];
        a[i] = -a[i];
    }

    int nonContributingSum = kadane(a,n);

    wrapSum = totalSum + nonContributingSum;
    cout<<"Total "<<totalSum<<" "<<"Non Contributing Sum "<<nonContributingSum<<endl;
    cout<<max(wrapSum, nonWrapSum)<<endl;
   
    return 0;
}