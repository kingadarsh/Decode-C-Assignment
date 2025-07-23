//
//  main.cpp
//  SubstrFunction
//
//  Created by Adarsh Kathriya on 20/07/25.
//


/*
 
 Input the string of even length and return the second half of the string, using the inbuilt substr function
 
 */
#include <iostream>
#include<string>
using namespace std;

int main(int argc, const char * argv[]) {
    string str;cin>>str;
    int l=str.size()/2;
    string sub=str.substr(l,l);
    cout<<sub;
}
