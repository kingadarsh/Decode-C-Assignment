//
//  main.cpp
//  wave form 3
//
//  Created by Adarsh Kathriya on 13/07/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>>a={{1,2,3},{4,5,6},{7,8,9}};
    int n=a.size();
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
    }
    
    
}
