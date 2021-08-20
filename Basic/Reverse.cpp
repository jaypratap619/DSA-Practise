#include <iostream>
using namespace std;

int Reverse(int n){
    int ans = 0;

    while (n > 0)
    {
        int rem = n % 10;
        ans = ans*10 + rem;
        n /= 10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<Reverse(n)<<endl;
    return 0;
}