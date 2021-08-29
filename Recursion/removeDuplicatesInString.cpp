#include <bits/stdc++.h>
using namespace std;

// This program will only remove continous duplicate characters

string removeDuplicates(string s){
    if(s.length() == 0) return "";
    
    char ch = s[0];

    string ans = removeDuplicates(s.substr(1));
    
    if(ch == ans[0] ){
        return ans;
    }
    return ch + ans;
}

int main(){
    cout<<removeDuplicates("aaaaabbbcceeed");
    return 0;
}