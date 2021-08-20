#include <iostream>
using namespace std;

bool isPT(int x, int y, int z){
    
    int a = max(x, max(y,z));
    int b,c;
    if(a == x){
        b=y; c=z;
    }
    else if(a == y){
        b=x; c=z;
    }
    else{
        b=y; c=x;
    }
    return (a*a == b*b + c*c);
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<isPT(x,y,z)<<endl;
    return 0;
}