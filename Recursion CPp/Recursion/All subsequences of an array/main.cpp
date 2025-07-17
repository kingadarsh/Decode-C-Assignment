//
//  main.cpp
//  All subsequences of an array
//
//  Created by Adarsh Kathriya on 07/04/25.
//

#include <iostream>
#include<vector>
using namespace std;

//--------Taking multiple vectors ~ Space complexity--------//

/*
void recu(vector<int>&arr,vector<int>&temp,vector<vector<int>>& ans,int i){
    int n=arr.size();
    
    if(i>=n){
        ans.push_back(temp);
        return;
    }
    
//    exclude
    recu(arr,temp,ans,i+1);
    
//    include
    vector<int>newTemp=temp;
    newTemp.push_back(arr[i]);
    recu(arr,newTemp,ans,i+1);
    
    
    
}
*/

//--------Taking Pointers--------//

void recu(vector<int>arr,int s,int e){
    if(e==arr.size()){
        return;
    }
    
    for(int i =s;i<=e;i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    recu(arr,s,e+1);
}

void recu1(vector<int>arr ){
    for(int s=0;s<arr.size();s++){
        int e=s;
        recu(arr,s,e);
    }
}


int main(int argc, const char * argv[]) {
    
    vector<int>arr={1,2,3};
//    vector<vector<int>>ans;
//    vector<int>temp;
//    
//    int i =0;
//    recu(arr,temp,ans,i);
//    
//    for(int i =0;i<ans.size();i++){
//        for(auto j=0;j<ans[i].size();j++){
//            cout<<ans[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    
    
    
 
    recu1(arr);
    
    
    
    
    
    
    
    
}
