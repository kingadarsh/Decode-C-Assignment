/*



 ### ❓ Question:

 **"Given an array of positive integers `arr[]` representing the available steps, and an integer `target`, find the minimum number of elements from `arr[]` (repetition allowed) that sum up to the target. If it's not possible to reach the target using the given steps, return `INT_MAX` or some indication of impossibility."**

 ---

 ### 🧠 Problem Statement (Formal Version):

 You are given a list of integers `arr` and a target integer `target`. You can pick any number from `arr` any number of times. Your task is to determine the **minimum number of elements** required to sum up to exactly the `target`. If it's not possible to reach the target, return an indication (like `-1` or `INT_MAX`) to show that.

 ---

 ### 🔍 Example:

 **Input:**
 ```cpp
 arr = [1, 2, 3]
 target = 7
 ```

 **Output:**
 ```
 3
 ```

 **Explanation:**
 - One way to make 7: `3 + 2 + 2` → 3 elements
 - Another way: `1 + 3 + 3` → also 3 elements
 - Minimum number of elements required: `3`

 ---

*/

#include <iostream>
using namespace std;

int recu(int arr[],int t,int n){
    
    
    if(t==0){
        return 0;
    }
    if(t<0){
        return INT_MAX;
    }
    
    int mini=INT_MAX;
    for(int i =0;i<n;i++){
        int ans=recu(arr,t-arr[i],n);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    
    return mini;
}


int main(int argc, const char * argv[]) {
    int arr[] = {1, 2, 3};
    int n =sizeof(arr)/sizeof(arr[0]);
    int t = 7;

    
    int ans=recu(arr,t,n);
    cout<<ans;
    
}
