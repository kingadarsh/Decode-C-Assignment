/*

 ### 🧠 Question:

 **"You are given an array of integers where you cannot pick two adjacent elements. Write a recursive function to find the maximum sum of non-adjacent elements."**

 Given the array:
 `arr = {2, 1, 4, 9}`
 Your goal is to select elements such that:
 - No two selected elements are adjacent.
 - The sum of selected elements is maximized.

 👉 For example:
 - Picking `2 + 4 = 6` ✅
 - Picking `2 + 9 = 11` ✅
 - Picking `1 + 9 = 10` ✅
 - But `4 + 9` ❌ (not allowed — adjacent)

 ---

 ### ✅ Output for `arr = {2, 1, 4, 9}`:
 ```
 11
 ```
 
 */

#include <iostream>
using namespace std;

int recu(int arr[],int n,int sum,int i){
//    int maxi=INT_MIN;
    if(i>=n){
        return sum;
    }
    
   int include= recu(arr,n,sum,i+1);
    
   int exclude=recu(arr,n,sum+arr[i],i+2);
    
    return max(include,exclude);
    
}

int main(int argc, const char * argv[]) {
    int arr[]={2, 1, 4, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int i =0;
    
    
    int ans=recu(arr,n,sum,i);
    cout<<ans;
    
}
