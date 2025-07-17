//
//  main.cpp
//  SortingMatrix
//
//  Created by Adarsh Kathriya on 26/03/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>>arr={{2,4},{6,8}};
    int x=1;
    

    
    vector<int> temp;
    for(int i =0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            temp.push_back(arr[i][j]);
        }
    }
    
    sort(temp.begin(),temp.end( ));
    int n=temp.size();
    
    int median = temp[n/2];
    int operation=0;
    for(auto val : temp ){
        operation +=abs(val-median)/x;
    }
    
    cout<<operation;
    
    
    
    
}

