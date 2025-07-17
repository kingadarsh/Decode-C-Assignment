/*

 You are given a positive integer n, and your task is to generate an n x n matrix filled with elements from 1 to n² in spiral order, starting from the top-left corner and proceeding clockwise.
 
 ------- Explanation ---------
    1 → 2 → 3
            ↓
    8 → 9   4
    ↑       ↓
    7 ← 6 ← 5

 -------Test Cases--------
 Input:
 n = 3

 Output:
 [
  [1, 2, 3],
  [8, 9, 4],
  [7, 6, 5]
 ]
 
 
 */


#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;cout<<"Give the dimension of the matrix : ";cin>>n;
    vector<vector<int>>arr(n,vector<int>(n,0));
    
    int minR=0,maxR=n-1;
    int minC=0,maxC=n-1;
    int item=1;
    
    while(minC<=maxC && minR<=maxR){
        
//        Rigth
        for(int i=minC;i<=maxC;i++){
            arr[minR][i]=item++;
        }
        minR++;
        
        if(minC>maxC || minR>maxR) break;
        
//        Down
        for(int i=minR;i<=maxR;i++){
            arr[i][maxC]=item++;
        }
        maxC--;
        
        if(minC>maxC || minR>maxR) break;
        
//        Left
        for(int i=maxC;i>=minC;i--){
            arr[maxR][i]=item++;
        }
        maxR--;
        if(minC>maxC || minR>maxR) break;
        
//        Up
        for(int i=maxR;i>=minR;i--){
            arr[i][minC]=item++;
        }
        minC++;
        if(minC>maxC || minR>maxR) break;
        
    }
    
    
    for(auto & a:arr){
        for(int i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    
    
    
    
}
