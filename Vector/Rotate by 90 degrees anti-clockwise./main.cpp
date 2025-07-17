//
//  main.cpp
//  Rotate by 90 degrees anti-clockwise.
//
//  Created by Adarsh Kathriya on 16/07/25.
//

/*
 
 vector<vector<int>>arr={
 {1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}
 };
 
 ----------------OUTPUT---------
 3 6 9
 2 5 8
 1 4 7
 
 */

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>>arr={
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    
    int n=arr.size();
//    vector<vector<int>>temp(n,vector<int>(n,0));
    
    
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          swap(arr[i][j],arr[j][i]);
      }
  }
    
    for(vector<int> &a:arr){
        for(int i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    reverse(arr.begin(),arr.end());
    
    for(vector<int> &a:arr){
        for(int i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
//    
    
    
}
