#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str = "fhghghhhggfaass";
    int freq[26]={0};
    for(int i = 0 ; i < str.size(); i++){
        freq[str[i] - 'a']++;
    }
    int maxF = 0;
    char maxChar = 'a';
    for(int i = 0 ; i < 26 ; i++){
        if(freq[i] > maxF){
            maxF = freq[i];
            maxChar = i + 'a';
        }
    }
    cout<<maxChar<<" "<<maxF<<endl;
    return 0;
}
