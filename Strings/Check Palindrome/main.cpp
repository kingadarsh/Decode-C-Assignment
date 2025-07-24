//
//  main.cpp
//  Check Palindrome
//
//  Created by Adarsh Kathriya on 24/07/25.
//

/*
 Check whether the given string is palindrome or not.

 Input : "abcde"
 Output : No

 Input : "abcdcba"
 Output : Yes
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s = "abcdcba";
    int i =0,j=s.length()-1;
    bool a=true;
    while(i<j){
        if(s[i++]!=s[j--]){
            a=false;
            break;
        }
    }
//    cout<<boolalpha<<a;
    
}
