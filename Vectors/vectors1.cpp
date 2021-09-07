#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    for(int i = 0 ; i < v1.size() ; i++){
        cout<<v1[i]<<" ";
    }cout<<endl;
    //  1 2 3

    vector<int>::iterator it;

    for(it = v1.begin(); it != v1.end() ; it++){
        cout<<*it<<" ";
    }cout<<endl;
    //  1 2 3

    for(auto element: v1){
        cout<<element<<" ";
    }cout<<endl;
    //  1 2 3

    v1.pop_back(); // 1 2 

    vector<int> v2(3,50);  // 50 50 50

    swap(v1, v2);

    for(auto element: v1){
        cout<<element<<" ";
    }cout<<endl;
    for(auto element: v2){
        cout<<element<<" ";
    }cout<<endl;

 
    return 0;
}