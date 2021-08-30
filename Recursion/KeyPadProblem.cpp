//Find all the combinations of word with given sequence of buttons on a keypad phone
#include <bits/stdc++.h>
using namespace std;

string keypadArr[10] = {" ", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

void keyPadCombinations(string ip, string op){
    if(ip.length() == 0) {
        cout<<op<<endl;
        return;
    }
    char ch = ip[0];
    string letters = keypadArr[ch-'0'];  //letters = "abc"
    string ros = ip.substr(1);           //ros = "def"

    for(int i = 0 ; i < letters.length(); i++ ){
        keyPadCombinations(ros, op + letters[i]);
    }
}

int main(){
    keyPadCombinations("23", "");
    return 0;
}