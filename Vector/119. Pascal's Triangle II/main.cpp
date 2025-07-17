//
//  main.cpp
//  119. Pascal's Triangle II
//
//  Created by Adarsh Kathriya on 18/07/25.
//

#include <iostream>
#include<vector>
using namespace std;


int main(int argc, const char * argv[]) {
    int n;cin>>n;
    
    vector<vector<int>>arr;

    for(int i=1;i<=n+1;i++){
        vector<int>a(i);
        arr.push_back(a);
    }

//    for(auto &a:arr){
//        for(int i:a){
//            cout<<i<<" ";
//        }
//        cout<<endl;
//    }
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<arr[i].size();j++){
            if(j==0 || i==j) arr[i][j]=1;
            
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }
    
    
//    for(auto &a:arr){
//        for(int i:a){
//            cout<<i<<" ";
//        }
//        cout<<endl;
//    }
}
