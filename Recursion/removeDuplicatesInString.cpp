#include <bits/stdc++.h>
using namespace std;

// This program will only remove continous duplicate characters

string removeDuplicates(string s){
    if(s.length() == 0) return "";
    string ans = removeDuplicates(s.substr(1));
    
    char ch = s[0];
    if(ch == ans[0] ){
        return ans;
    }
    return ch + ans;
}

int main(){
    cout<<removeDuplicates("aaaaabbbcceeed");
    return 0;
}