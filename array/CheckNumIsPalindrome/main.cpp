//
//  main.cpp
//  CheckNumIsPalindrome
//
//  Created by Adarsh Kathriya on 14/02/25.
//

#include <iostream>
using namespace std;
int main( ){
    int n;cin>>n;
    int first=n;
    int rev=0;
    while(n!=0){
        int last=n%10;
        rev=rev*10+last;
        n/=10;
    }
    
    if(first==rev){
        cout<<"The number is \"a\" palindrome "<<endl;
    }
    else{
        cout<<"The number is not a palindrome"<<endl;
    }
}
