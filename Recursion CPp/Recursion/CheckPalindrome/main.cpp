//
//  main.cpp
//  CheckPalindrome
//
//  Created by Adarsh Kathriya on 08/05/25.
//

#include <iostream>
#include<cctype>

using namespace std;
bool recu(string &s,int &i,int &j,int &n){
    if(i>=j){
        return true;
    }
    while(i<n && !isalnum(s[i]))i++;
    while(j>0 && !isalnum(s[j]))j--;
    
    if(i<n && j>0 && tolower(s[i])!=tolower(s[j])){
        return false;
    }
    i=i+1;j=j-1;
    return recu(s,i,j,n);
}
int main(int argc, const char * argv[]) {
    string s = "A man, a plan, a canal: Panama";
    int n=s.size();
    int i=0,j=n-1;
    
    if(recu(s,i,j,n)){
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    
    
}
