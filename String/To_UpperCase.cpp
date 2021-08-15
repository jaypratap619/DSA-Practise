#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str;
    // cout<<'a' - 'A'<<endl;
    cin>>str;
    //Method 1
    // for(int i = 0 ; i < str.size(); i++){
    //     str[i] -= 32;
    // }


    //Method 2

    transform(str.begin(), str.end(),str.begin(), ::toupper);

    cout<<str;
    return 0;
}
