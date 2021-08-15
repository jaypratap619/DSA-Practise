#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define ff first
#define ss second

signed main(){
   int n;
   cin>>n;
   
   vii a(n);
   rep(i,0,n){
       cin>> a[i].ff >> a[i].ss;
   } 

   sort(a.begin(), a.end(), [&](pii p1, pii p2){
       return p1.ss < p2.ss;
   });


   int take = 1;
   int end = a[0].ss;

   rep(i,1,n){
       if(a[i].ff >= end){
           take++;
           end = a[i].ss;
       }
   } 

   cout<<take<<endl;
    

    return 0;
}