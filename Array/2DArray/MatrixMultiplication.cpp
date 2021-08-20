#include <iostream>
using namespace std;

// I/P

// 3 4 4 3
// 2 4 1 2
// 8 4 3 6
// 1 7 9 5
// 1 2 3
// 4 5 6
// 7 8 9
// 4 5 6

// O/P

// 33 42 51 
// 69 90 111
// 112 134 156

int  main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    if(c1 != r2){
        cout<<"Multiplaction not possible"<<endl;
        return 0;
    }
    int m1[r1][c1], m2[r2][c2];

    for(int i = 0 ; i < r1 ; i++)
        for(int j = 0 ; j < c1 ; j++)
            cin>>m1[i][j];

    for(int i = 0 ; i < r2 ; i++)
        for(int j = 0 ; j < c2 ; j++)
            cin>>m2[i][j];

    int m3[r1][c2];
    for(int i = 0 ; i < r1 ; i++)
        for(int j = 0 ; j < c2 ; j++)
            m3[i][j] = 0;
    
    // Multiplication

    for(int i = 0 ; i < r1 ; i++){
        for(int j = 0 ; j < c2 ; j++){
            for(int k = 0 ; k < c1 ; k++){
                m3[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    
    for(int i = 0 ; i < r1 ; i++){
        for(int j = 0 ; j < c2 ; j++)
            cout<<m3[i][j]<<" ";
        cout<<endl;
    }



    return 0;
}