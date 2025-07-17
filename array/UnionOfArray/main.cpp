#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main( ){
    vector<int>arr={1,2,-4,-5,3,4};
    int n = arr.size( );
    vector<int>pn;
    vector<int>nn;
    
    
    for(int i =0;i<n;i++){
        if(arr[i]>=0){
            pn.push_back(arr[i]);
        }
        else if(arr[i]<0){
            nn.push_back(arr[i]);
        }
    }
    
    int x=pn.size( ),y=nn.size( );
    int i=0,j=0;
    vector<int>ans;

    while(i <x && j<y){
        ans.push_back(pn[i]);
        ans.push_back(nn[j]);
        i++;
        j++;
    }
    while(i<x) ans.push_back(pn[i++]);
    
        
    while(j<y) ans.push_back(nn[j++]);
            
//
    for(auto a:ans){
        cout<<a<<" ";
    }
//    
    
    
    
    
//    cout<<maxprof;
    
}


