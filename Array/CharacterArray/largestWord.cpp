// From a sentence find out length of largest word and also output larget word

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    
    int currAns = 0, ans= 0;
    int currSt = 0 , st = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == '\0'){
            break;
        }

        else if(arr[i] == ' '){
            currAns = 0;
            currSt = i + 1;
        }
        else{
            currAns++;
        }

       if(currAns >  ans)
        {
            ans = currAns;
            st = currSt;
        }
    }
    ans;
    cout<<ans<<endl;
    for(int i = 0 ; i < ans; i++){
        cout<<arr[st+i];
    }
    cout<<endl;
    return 0;
}