//Find all permutations of a string

#include <bits/stdc++.h>
using namespace std;


void permutations(string ip, string op){
   if(ip.length() == 0){
       cout<<op<<endl;
       return;
   }
   

   for(int i = 0 ; i < ip.length() ; i++){
       string ros = ip.substr(0,i) + ip.substr(i+1); 
       permutations(ros, op+ip[i]);    
   }
}

int main(){
    permutations("ABC", "");
    return 0;
}