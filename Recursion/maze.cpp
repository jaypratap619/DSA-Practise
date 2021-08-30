// Count the numbers of possible paths from (0,0) to (n-1,n-1) in a maze(nXn) 
// You only move 1 step down or 1 step right
#include <iostream>
using namespace std;

int CountPathMaze(int n,int i, int j){
    if( i == n-1 && j == n-1)
        return 1;
    
    if(i > n-1 || j > n-1)
        return 0;
    
    return CountPathMaze(n,i+1, j) + CountPathMaze(n,i, j+1);

}

int main(){
    cout<<CountPathMaze(3,0,0)<<endl;
    return 0;
}