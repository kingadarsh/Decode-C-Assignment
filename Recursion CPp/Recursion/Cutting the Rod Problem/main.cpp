/*

 ### 🪓 Cutting the Rod Problem — Maximize Number of Cuts

 ---

 ### ❓ **Problem Statement:**

 You are given a rod of length `target`, and you can cut it into smaller segments of length `x`, `y`, or `z`. Your task is "Maximize the number of segments" the rod can be cut into such that **each segment is of length x, y, or z** and **the total length of the segments adds up exactly to the target**.

 If it's not possible to cut the rod exactly into these lengths, return an indication (like `INT_MIN` or `-1`) to show it's impossible.

 ---

 ### 📥 Input:
 - An integer `target` — the total length of the rod.
 - Three integers `x`, `y`, and `z` — the possible lengths you can cut.

 ---

 ### 📤 Output:
 - An integer representing the **maximum number of segments** the rod can be cut into using the given lengths.

 ---

 ### 🧪 Example:

 **Input:**
 ```
 target = 7
 x = 5
 y = 2
 z = 2
 ```

 **Output:**
 ```
 3
 ```

 **Explanation:**
 You can cut the rod into: `2 + 2 + 3 = 7` → 3 segments
 (Though here it's `2+2+3`, since only `2` and `5` are allowed, it would be `2+2+2+1`—but that goes over target or uses invalid cut. So valid max is `2+2+3`, which doesn't work — example may need to be adjusted).

 > But in this code, `2 + 2 + 3` wouldn't work since `3` is not allowed — so the actual valid configuration is `2 + 2 + 3` not possible. But `2 + 5` is `7`, so `2 segments`, and `2 + 2 + 2` is `6`, invalid.
 So `2 + 5 = 7` → max segments = 2
 Wait — that would mean your output should be `2`, not `3`.

 We should re-check the input/output again based on allowed cuts only: 5, 2, 2

 **Valid combinations:**
 - `2 + 5 = 7` → 2 segments ✅
 - `2 + 2 + 2 = 6` → not enough ❌
 - So `max = 2`

 Your code might be outputting `3` by mistake because of repeated subcalls. If needed, we can memoize or debug the logic.

 ---

 Want me to add a **memoized version** or verify this input/output logic with trace?
 
 */



#include <iostream>
using namespace std;

int recu(int t,int x,int y,int z){
    if(t==0){
        return 0;
    }
    if(t<0){
        return INT_MIN;
    }
    
    
    int ans1 = recu(t-x,x,y,z)+1;
    int ans2=recu(t-y,x,y,z)+1;
    int ans3=recu(t-z,x,y,z)+1;
    
    int ans= max(ans1,max(ans2,ans3));
    
    if(ans==INT_MIN){

        return INT_MIN;
        
    }
    else{
        return ans;
    }
}
int main(int argc, const char * argv[]) {
    int t=7;
    int x=5,y=2,z=2;
//    int x = 5, y = 4, z = 3;
//    int x = 5, y = 6, z = 9;
    
    int ans=recu(t,x,y,z);
    cout<<ans;
    
}
