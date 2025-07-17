
/*
 ---

 ### ❓ **Question: Generate All Subsequences of a String**

 **Problem Statement:**
Given a string `str`, write a recursive function to print all possible **subsequences** of the string. A    subsequence is a sequence that can be derived by deleting zero or more characters from the string without changing the order of the remaining characters.

 **Input:**
 A string `str` of length `n` (1 ≤ n ≤ 20) consisting of lowercase English letters.

 **Output:**
 Print all possible subsequences of the string, each on a new line. The order of output does not matter.

 **Example:**

 Input:
 ```
 abc
 ```

 Output:
 ```
 abc
 ab
 ac
 a
 bc
 b
 c
 ```
 (Note: The empty string is not printed in this implementation, but you may choose to include it depending on the requirement.)

 ---
 */


#include <iostream>
using namespace std;
void recu(string str,string output,int i){
    int n=str.length();
    if(i==n){
        cout<<output<<endl;
        return;
    }
   
    
//    include
    recu(str,output+str[i],i+1);
    
// exclude
    recu(str,output,i+1);
    

    
}


int main(int argc, const char * argv[]) {
    string str="abc";
    string output="";
    int i =0;
    recu(str,output,i);
    
}
