//
//  main.cpp
//  N Queens Problem
//
//  Created by Adarsh Kathriya on 11/05/25.
//

#include <iostream>
#include<iostream>
using namespace std;

void printSolution(vector<vector<int>>&board,int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(board[row][col]==1){
                cout<<'Q'<<" ";
            }else{
                cout<<'-'<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}


bool isSafe(vector<vector<int>>&board,int row,int col,int n){
//    Nothing in Same Row previously
    int i=row;
    int j=col;
    while(j>=0){
        if(board[i][j]==1){
            return false;
        }
        j--;
    }
    
     i=row;
     j=col;
    
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
    
     i=row;
     j=col;
    
    while(i<n && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i++;
        j--;
    }
    
    return true;
}


void recu(vector<vector<int>>&board,int n,int c){
    if(c>=n){
        printSolution(board,n);
        return;
    }
    
//    Recursion
    for(int r=0;r<n;r++){
        if(isSafe(board,r,c,n)){
            board[r][c]=1;
            recu(board,n,c+1);
            board[r][c]=0;
        }
    }
}


int main(int argc, const char * argv[]) {
    int n;cin>>n;
    vector<vector<int>>board(n,vector<int>(n,0));
    int c=0;
    recu(board,n,c);
    
}
