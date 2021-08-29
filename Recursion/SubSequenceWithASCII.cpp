//Generating all subsequence of from a string containing ASCII values of charachters
#include <bits/stdc++.h>
using namespace std;

void subSeq2(string ip, string op){
    if(ip.length() == 0){
        cout<<op<<endl;
        return;
    }
    string op1 = op + ip[0];
    string op2 = op;
    string op3 = op + to_string(int(ip[0]));

    ip = ip.substr(1);
    subSeq2(ip,op1);
    subSeq2(ip,op2);
    subSeq2(ip,op3);
}

int main(){
    subSeq2("AB", "");
    return 0;
}