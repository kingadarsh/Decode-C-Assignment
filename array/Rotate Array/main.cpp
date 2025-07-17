/*
 
 Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

  

 Example 1:

 Input: nums = [1,2,3,4,5,6,7], k = 3
 Output: [5,6,7,1,2,3,4]
 Explanation:
 rotate 1 steps to the right: [7,1,2,3,4,5,6]
 rotate 2 steps to the right: [6,7,1,2,3,4,5]
 rotate 3 steps to the right: [5,6,7,1,2,3,4]
 Example 2:

 Input: nums = [-1,-100,3,99], k = 2
 Output: [3,99,-1,-100]
 Explanation:
 rotate 1 steps to the right: [99,-1,-100,3]
 rotate 2 steps to the right: [3,99,-1,-100]
  
 
 */


#include<iostream>
#include<vector>
using namespace std;
int main( ){
    vector<int>arr={-1,-100,3,99};
    int n=arr.size( );
    int k=2;
    vector<int>brr;
    cout<<n<<" "<<k<<endl;
    
    for(int i =n-k;i<n;i++){
        brr.push_back(arr[i]);
    }
    
    for(int i=0;i<n-k;i++){
        brr.push_back(arr[i]);
    }
    
    for(auto h:brr){
        cout<<h<<" ";
    }

    
//    for(int i =0;i<n;i++){
//        cout<<"The index is : "<<i<<"and the element is : "<<arr[i] <<endl;
//    }
}
