//
//  main.cpp
//  Palindrome Number 9 Leetcode
//
//  Created by Adarsh Kathriya on 24/03/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;cin>>n;
    
    int temp=n;
//    int i =0;
    
    
    string ans="";
    while(temp>0){
        int k= temp%10;
        ans=ans+to_string(k);
        temp=temp/10;
    }
    cout<<typeid(stoi(ans)).name();
    
    
}
