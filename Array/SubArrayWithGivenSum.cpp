// Find the start index and end Index of a subarrray with a given sum
// Output --> Indexing from 1
//I/P
// 5 12
// 1 2 3 7 5
// O/P
// 2 4

#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i = x; i < y ; i++)

int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    rep(i,0,n){
        cin>>a[i];
    }
    int i = 0, j = 0; 
    int st =-1, en = -1, sum = 0;
    while( j < n && sum + a[j] <= s){
        sum += a[j];
        j++;
    }

    if(sum == s){
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
    }

    while(j < n){
        sum += a[j];

        while(sum > s){
            sum -= a[i];
            i++;
        }
        if(sum == s){
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    
    cout<<st<<" "<<en<<endl;
    return  0;
}

