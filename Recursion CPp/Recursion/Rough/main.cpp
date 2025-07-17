#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
//    vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
//    int n;cin>>n;
    vector<string>nums = {"3","6","7","10"};
    int n=nums.size();
    vector<int>ans(n);
    int i=0;
    for(auto a:nums){
        ans[i++]=stoi(a);
    }
    sort(ans.begin(),ans.end( ));
//    for(auto a:nums){
//        cout<<a<<" ";
//    }
    
    cout<<to_string(ans[n-1-3]);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//
//    int i =0;
//    while(i<nums.size()){
//        int j=i+1;
//        while(j<nums.size() && nums[i]==nums[j])j++;
//        
//        nums.erase(nums.begin()+i,nums.begin()+i+j);
//        i++;
//    }
//    
//    for(auto a:nums){
//        cout<<a<<" ";
//    }
    

    

    
}
