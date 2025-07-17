//
//  main.cpp
//  diagonals in a square matrix.  diagonals in a square matrix.  diagonals in a square matrix.  Diagonals in a square matrix
//
//  Created by Adarsh Kathriya on 16/07/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>>arr={
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 }
    };
    int r=arr.size();
    int c=arr[0].size();
    vector<vector<int>>brr(r,vector<int>(c,0));
    
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                brr[i][j]=arr[i][j];
            }
            else if((i+j)==(r-1)){
                brr[i][j]=arr[i][j];
            }
        }
        
    }
    
    
    for(auto &z:brr){
        for(int i:z){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
