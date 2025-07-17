/*
 

 Write a function which accepts a 2D array of integers and its size as arguments and displays the
 elements of middle row and the elements of middle column.
 (Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...)
 
 */


#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
   vector<vector<int>>arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int n = 3;
    int mid=n/2;
    
    
    for(int i=0;i<n;i++){
//            for rows
        cout<<arr[i][mid]<<" ";
    }
    
    cout<<endl;
    for(int i=0;i<n;i++){
//            for rows
            cout<<arr[mid][i]<<" ";
    }
}
