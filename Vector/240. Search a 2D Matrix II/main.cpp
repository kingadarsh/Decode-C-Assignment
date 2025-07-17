//
//  main.cpp
//  240. Search a 2D Matrix II
//
//  Created by Adarsh Kathriya on 18/07/25.
//


#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>>arr={
        {1,4,7,11,15},
        {2,3,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };
    int t = 5;
    int r=arr.size();
    int c=arr[0].size();
    int ans=false;
    
    for(int i=0;i<r;i++){
        int s=0,e=arr[i].size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[i][mid]==t){
                ans=true;
                break;
            }
            
            else if(arr[i][mid]<t){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    
    
    
    
    
    
    
    cout<<ans;
//    
//    vector<int>a;
//    for(int j=0;j<c;j++){
//        
//    }
//    int s=0,e=a.size()-1;
//    int mid=s+(e-s)/2;
//    while(s<=e){
//        mid=s+(e-s)/2;
//        if(a[mid]==t){
//            ans=true;
//            break;
//        }
//        else if(a[mid]<t){
//            s=mid+1;
//        }
//        else{
//            e=mid-1;
//        }
//    }

}
