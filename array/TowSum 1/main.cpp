//
//  main.cpp
//  TowSum 1
//
//  Created by Adarsh Kathriya on 24/03/25.
//

#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {2,7,11,15}; int target = 9;
    int n = arr.size();
    
    unordered_map<int, int>hashmap;
    
    for(int i =0;i<n;i++){
        int t = target-arr[i];
        if(hashmap.count(t)){
            cout<<hashmap.at(t)<<" "<<i<<endl;
        }
        
        hashmap.insert({arr[i],i});
    }
}


/*
 ------------------------------------------------Logic Flow------------------------------------------------
 
 ## **Understanding the Problem**
 You are given an array of integers `nums` and an integer `target`. Your task is to find **two distinct indices** in the array such that the sum of the numbers at those indices is equal to `target`. You can assume that there is **exactly one solution**, and you cannot use the same element twice.

 ---

 ## **Example Walkthrough**
 Let's visualize the first example:
 📌 **Input:** `nums = [2,7,11,15]`, `target = 9`
 📌 **Output:** `[0,1]`
 📌 **Explanation:** The numbers at indices **0** and **1** are **2** and **7**, and their sum is **9**.

 So, we return `[0,1]`.

 ---

 ## **Brute Force Approach (Not Optimal)**
 A naive way to solve this is by using **two loops**:

 1. Pick each number one by one.
 2. Check with every other number if their sum equals the target.

 ```cpp
 // Brute Force - O(n^2) Time Complexity
 vector<int> twoSum(vector<int>& nums, int target) {
     int n = nums.size();
     for(int i = 0; i < n; i++) {
         for(int j = i + 1; j < n; j++) { // Checking every pair
             if(nums[i] + nums[j] == target) {
                 return {i, j};
             }
         }
     }
     return {}; // This won't be reached as we are guaranteed to have one solution
 }
 ```
 🔴 **Issue:** This approach has **O(n²) time complexity**, which is slow for large arrays.

 ---

 ## **Optimal Approach (Using Hash Map)**
 Instead of checking all pairs, we can use a **hash map (unordered_map in C++)** to store numbers we’ve seen and their indices.

 ### **How Does the Hash Map Help?**
 - We iterate through `nums`.
 - For each number, we calculate its **complement** (`target - nums[i]`).
 - We check if this complement is already in our **hash map**.
 - If yes → We return the indices.
 - If no → We store the current number and its index in the hash map.

 ### **Dry Run (Step-by-Step Visualization)**
 For **nums = [2, 7, 11, 15]**, `target = 9`:

 | Index (i) | Number (nums[i]) | Complement (target - nums[i]) | Hash Map State | Action |
 |-----------|-----------------|-------------------------------|----------------|---------|
 | 0         | 2               | 9 - 2 = 7                     | `{}`           | Store `{2: 0}` |
 | 1         | 7               | 9 - 7 = 2                     | `{2: 0}`       | **Found 2! Return [0, 1]** |

 ✨ **We return `[0,1]` before even looking at other numbers!** This is why this approach is **O(n)**.

 ---

 ## **Optimized C++ Code (Using Hash Map)**
 ```cpp
 #include <iostream>
 #include <vector>
 #include <unordered_map>
 using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int, int> hashMap; // Stores {number, index}
     
     for(int i = 0; i < nums.size(); i++) {
         int complement = target - nums[i]; // Find the complement
         
         // If complement exists in hashMap, return indices
         if(hashMap.find(complement) != hashMap.end()) {
             return {hashMap[complement], i}; // Found the pair
         }
         
         // Store current number and its index
         hashMap[nums[i]] = i;
     }
     
     return {}; // No solution (but problem guarantees a solution)
 }

 int main() {
     vector<int> nums = {2, 7, 11, 15};
     int target = 9;
     
     vector<int> result = twoSum(nums, target);
     
     cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
     return 0;
 }
 ```

 ---

 ## **Time and Space Complexity**
 | Approach | Time Complexity | Space Complexity |
 |----------|---------------|----------------|
 | Brute Force | **O(n²)** | **O(1)** |
 | Hash Map (Optimal) | **O(n)** | **O(n)** |

 ### **Why is the Hash Map Approach Better?**
 - **Fast Lookup:** Checking if a number exists in a hash map is **O(1)**.
 - **Single Pass:** We traverse the array **only once**.
 - **No Extra Loops:** We don’t need a nested loop.

 ---

 ## **Key Takeaways**
 1. **Brute force** (`O(n²)`) checks all pairs, but it’s slow.
 2. **Hash Map Approach** (`O(n)`) is the best because it **remembers numbers efficiently**.
 3. **Always check for complements** before storing a number in the map.

 ---

 ### **💡 Visual Trick to Never Forget**
 Think of a **treasure hunt**:
 - The **target** is a hidden treasure.
 - Each number is a **key**.
 - The **hash map** is like a **diary where you store found keys**.
 - When you find a key that **unlocks the treasure (complement found in hash map)** → You WIN immediately! 🎯

 Now, you’ll never forget this algorithm! 🚀
 */
