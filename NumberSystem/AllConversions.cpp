#include <bits/stdc++.h>
using namespace std;

int BinToDec(int n){
    int dec = 0;
    int i = 1;

    while(n > 0){
        int lastDigit = n % 10;
        dec += lastDigit * i;
        i = i * 2;
        n = n/10;
    }

    return dec;
}
int OctToDec(int n){
    int dec = 0;
    int i = 1;

    while(n > 0){
        int lastDigit = n % 10;
        dec += lastDigit * i;
        i = i * 8;
        n = n/10;
    }

    return dec;
}
int HexToDec(string s){
    int dec = 0;
    int i = 1;
    int len = s.size();

    for(int j = len - 1 ; j >= 0 ; j-- ){
        if(s[j] > '0' && s[j] < '9'){
            dec += (s[j] - '0') * i;
            i *= 16;
        }
        else{
            dec += (s[j] - 'A' + 10) * i;
            i *= 16;
        }
    }

    return dec;
}

//Approach 1

// int DecToBinary(int n){
//     int bin = 0;
//     int i = 1;
//     while(n>0){
//         int rem = n%2;
//         n = n / 2;
//         bin += i * rem;
//         i = i*10;
//     }
//     return bin;
// }

//Approach 2 

int DecToBinary(int n){
    int ans = 0;
    int x = 1;
    //We have to find the highest power of 2 in n
    while(x <=n)
        x *= 2;
    x /= 2;

    while(x > 0){
        int lastDigit = n / x;  //will get either 1 or 0
        n -= lastDigit * x;
        x /= 2;
        ans = ans*10 + lastDigit;
    }

    return ans;
}

int DecToOct(int n){
    int ans = 0;
    int x = 1;
    //We have to find the highest power of 2 in n
    while(x <=n)
        x *= 8;
    x /= 8;

    while(x > 0){
        int lastDigit = n / x;  //will get 0 - 7
        n -= lastDigit * x;
        x /= 8;
        ans = ans*10 + lastDigit;
    }

    return ans;
}
string DecToHex(int n){
    string ans = "";
    int x = 1;
    //We have to find the highest power of 2 in n
    while(x <=n)
        x *= 16;
    x /= 16;

    while(x > 0){
        int lastDigit = n / x;  //will get 0 - 15
      
        n -= lastDigit * x;
        x /= 16;

        if(lastDigit <= 9){
            ans += to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }

    return ans;
}

int main(){
    int bin,oct;
    string hex;
    cout<<"Enter Binary :";
    cin>>bin;
    cout<<"Enter Octal :";
    cin>>oct;
    cout<<"Enter Hexadecimal :";
    cin>>hex;
    cout<<"Decimal of "<<bin<<" is "<<BinToDec(bin)<<endl;
    cout<<"Decimal of "<<oct<<" is "<<OctToDec(oct)<<endl;
    cout<<"Decimal of "<<hex<<" is "<<HexToDec(hex)<<endl;

    cout<<endl<<"---------------------------------------------"<<endl;
    int dec;
    cout<<"Enter Decimal :";
    cin>>dec;
    cout<<"Binary of "<<dec<<" is "<<DecToBinary(dec)<<endl;
    cout<<"Octal of "<<dec<<" is "<<DecToOct(dec)<<endl;

    // decimal to hex 463 --> 1CF
    
    cout<<"HexaDecimal of "<<dec<<" is "<<DecToHex(dec)<<endl;

  
    return 0;
}