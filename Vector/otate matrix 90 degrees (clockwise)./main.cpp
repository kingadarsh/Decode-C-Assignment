//
//  main.cpp
//  otate matrix 90 degrees (clockwise).
//
//  Created by Adarsh Kathriya on 11/07/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>>arr={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    int n=arr.size();
    for(auto &a:arr){
        for(auto i :a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                swap(arr[i][j],arr[j][i]);
            }
            
        }
    }
    
    for(auto &i:arr){
            int s=0;int e=n-1;
            while(s<e){
                swap(i[s++],i[e--]);
            }
        }
    
    
    
    for(auto &a:arr){
        for(auto i :a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}
