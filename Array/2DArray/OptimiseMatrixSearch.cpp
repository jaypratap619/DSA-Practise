#include <iostream>
using namespace std;

//Given that the elements in each row are sorted and elements in each comlumn are sorted

//We have two possible starting points for our algorithm either from (0,m-1) or (n-1,o)

int main(){
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i = 0 ; i < n  ; i++ ){
        for(int j = 0 ; j < m ; j++){
            cin>>mat[i][j];
        }
    }

    int key;
    cin>>key;

    //Searching

    int r = 0, c = m - 1;
    while( r < n && c >= 0 ){
        if(key == mat[r][c]){
            cout<<"Element found"<<endl;
            return 0;
        }
        else if(key < mat[r][c]){
            c--;
        }
        else{
            r++;
        }
    }
    cout<<"Element Not found"<<endl;
    return 0;
}