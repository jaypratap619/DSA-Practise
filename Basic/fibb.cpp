#include <iostream>
using namespace std;

int fibb(int n){
    if(n < 2)
        return n;
   
    
    int a = 0;
    int b = 1;
    int c;
    for(int i = 2 ; i <= n ; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    cout<<fibb(n)<<endl;
    return 0;
}