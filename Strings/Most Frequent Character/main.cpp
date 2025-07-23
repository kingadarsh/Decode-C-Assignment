//
//  main.cpp
//  Most Frequent Character
//
//  Created by Adarsh Kathriya on 21/07/25.
//

/*
 
 Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s. If more than one character occurs the maximum number of times then print the lexicographically smaller character.

 Examples:

 Input: s = "testsample"
 Output: 'e'
 Explanation: e is the character which is having the highest frequency.
 Input: s = "output"
 Output: 't'
 Explanation:  t and u are the characters with the same frequency, but t is lexicographically smaller.

 
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {


    string s="testsample";
    vector<int>temp(27,0);
    
    for(int i=0;i<s.size();i++){
        int ascii=int(s[i]);
        temp[ascii-97]++;
    }
    

    int index=0;
    int max=0;
    for(int i=0;i<temp.size();i++){
        if(max<temp[i]){
            max=temp[i];
            index=i;
        }
        else if(max==temp[i]){
            continue;
        }
    }
    
    
    cout<<char(index+97)<<" "<<max<<endl;
    
    
}
