// Finf all unique permutations
// array can also  have dupliacte elements

#include <bits/stdc++.h>
using namespace std;


void helper(vector<int> a, vector<vector<int>> &ans ,int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }

    for (int i = idx; i < a.size(); i++){
       if(a[i] == a[idx] && i != idx){
           continue;
       } 
       swap(a[i],a[idx]);
       helper(a,ans,idx+1);
    }
    return;
}

vector<vector<int>> permute(vector<int> nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    helper(nums,ans,0);
    return ans;

}

int main(){
    int n; cin>>n;
    vector <int> a(n);

    for(auto &i : a){
        cin>>i;
    }
    
    vector<vector<int>> ans = permute(a);

    // STL Method
    // sort(a.begin(), a.end());
    // do{
    //     ans.push_back(a);
    // }while(next_permutation(a.begin(),a.end()));


    cout<<endl;
    for(auto v: ans){
        for(auto i: v){
            cout<<i<<" ";
        }cout<<endl;
    }

    return 0;
}
