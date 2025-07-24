//
//  main.cpp
//  counting Consonant in Str
//
//  Created by Adarsh Kathriya on 24/07/25.
//

/*
 Input a string of length n and count all the consonants in the given string.

 Input : "pwians"
 Output : 4

 Input : "abdc"
 Output : 3
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
//    string s = "pwians";
//    int cnt=0;
//    for(int i =0;i<s.length();i++){
//        char c=tolower(s[i]);
//        
//        if ((!isalnum(c)) && (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')){
//            continue;
//        }else{
//            cnt++;
//        }
//    }
//    
//    cout<<cnt;
    
    
    int x=121;
    int x_s=x;
    long long j=1;
    long long temp=0;
    while(x_s){
        int i=x_s%10;
        temp=(temp*j+i);
        j=10;
        x_s=x_s/10;
    }

    cout<<temp;
}

