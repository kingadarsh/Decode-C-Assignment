//
//  main.cpp
//  Minimum No to reach target
//
//  Created by Adarsh Kathriya on 03/04/25.
//

#include <iostream>
#include<vector>
using namespace std;

int recu(vector<int>& arr,int target){
    if(target==0) return 0;
    if(target<0)return INT_MAX;
    
    int mini=INT_MAX;
    for(int i =0;i<arr.size();i++){
        int ans=recu(arr,target-arr[i]);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}

int main(int argc, const char * argv[]) {
    vector<int>arr={1,2,3};
    int target=7;
    int output =0;
    int ans=recu(arr,target);
    cout<<ans;
    
}
