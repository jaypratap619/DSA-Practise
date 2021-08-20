#include <bits/stdc++.h>
using namespace std;

// I/P 
//4
//-1 4 7 2
//O/P
// 13

// IN O(n^3)

int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i = 0; i < n ; i ++)
        cin>>a[i];

    int Cursum = 0, sum = INT_MIN;
    for(int i = 0; i < n ; i++){
        for(int j = i ; j < n ; j++ ){
            Cursum = 0;
            for(int k = i ; k <= j ; k++){
                Cursum += a[k];
            }
           sum = max(Cursum, sum);
        }
    }
    cout<<sum<<endl;
    return 0;
}