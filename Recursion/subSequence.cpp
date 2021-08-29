//Generating all subsequence of from a string
#include <bits/stdc++.h>
using namespace std;

void subSeq(string ip, string op){
    if(ip.length() == 0){
        cout<<op<<endl;
        return;
    }
    string op1 = op + ip[0];
    string op2 = op;
    ip = ip.substr(1);
    subSeq(ip,op1);
    subSeq(ip,op2);
}

int main(){
    subSeq("abc", "");
    return 0;
}