#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define ff first
#define ss second

signed main(){
    int n ;
    cin>>n;
    vi a(n);
    rep(i, 0, n)
        cin>>a[i];
    int x,ans = 0;
    cin>>x;

    sort(a.begin(), a.end(), greater<int>());

    rep(i,0,n){
        if(a[i] > x){
            continue;
        }
        else{
            ans += x/a[i];
            x  -= x/a[i] * a[i]; 
        }
    }

    cout<<ans;

    return 0;
}