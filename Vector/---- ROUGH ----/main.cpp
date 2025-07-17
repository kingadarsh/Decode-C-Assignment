//
//  main.cpp
//  ---- ROUGH ----
//
//  Created by Adarsh Kathriya on 16/07/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> nums={-1,1,0,-3,3};
    int n=nums.size();
    
    vector<int> p(nums.size(),0);
    vector<int> s(nums.size(),0);
    p[0]=1;s[n-1]=1;

    for(int i=1;i<n;i++){
        p[i]=p[i-1]*nums[i-1];
    }
    for(auto i:p){
        cout<<i<<" ";
    }
    cout<<endl;

    
    for(int j=n-2;j>=0;j--){
        s[j]=s[j+1]*nums[j+1];
    }
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    
    for(int i=0;i<n;i++){
        nums[i]=p[i]*s[i];
    }

    for(auto i:nums){
        cout<<i<<" ";
    }
    
    
}
