#include <bits/stdc++.h>
using namespace std;

void replacepi(string s){
    if( s.length() == 0 ) return;
    if(s[0] == 'p' && s[1] == 'i' ){
        cout<<"3.14";
        string ros = s.substr(2);
        replacepi(ros);
    }
    else{
        cout<<s[0];
        string ros = s.substr(1);
        replacepi(ros);
    }
}

int main(){
    replacepi("pippxxppiixipi");
    return 0;
}