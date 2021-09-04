//There is a nXn maze, Rat is starting at (0,0) and has to reach (n.n) . There are some points in a maze where he is not allowed to go.
//Find the path for the rat. Rat can only move either down or right.

#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n){
    if(x < n && y < n && arr[x][y]){
        return true;
    }
    return false;
}

bool RatInMaze(int** arr,int x, int y, int n, int** solArr){
    //Base Condition
    if(x == n-1 && y == n-1){
        solArr[x][y] = 1;
        return true;
    }

    if(isSafe(arr,x,y,n)){
        solArr[x][y] = 1;
        if(RatInMaze(arr, x + 1, y, n, solArr)){
            return true;
        }
        if(RatInMaze(arr, x, y + 1, n, solArr)){
            return true;
        }
        solArr[x][y] = 0;    //Back Tracking //Here we cannot move in either of the directions so we have to return 1 step back
        return false;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int **arr = new int*[n];
    for(int i = 0 ; i < n ; i++){
        arr[i] = new int[n];
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>arr[i][j];
        }
    }
    int **solArr = new int*[n];
    for(int i = 0 ; i < n ; i++){
        solArr[i] = new int[n];
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            solArr[i][j] = 0;
        }
    }
    cout<<endl;

    if(RatInMaze(arr, 0,0,n,solArr)){
        for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
    }
    }


    return 0;
}

// 1 0 1 0 1    
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1