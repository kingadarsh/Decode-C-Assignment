//
//  main.cpp
//  Subsequence
//
//  Created by Adarsh Kathriya on 08/05/25.
//

#include <iostream>
#include<vector>
using namespace std;
void recu(string &s,int i,int &n,vector<string>&ans,string  output){
    if(i>=n){
        ans.push_back(output);
        return;
    }
    
//exclude
    recu(s,i+1,n,ans,output);
    
//include
    output+=s[i];
    recu(s,i+1,n,ans,output);
}

int main(int argc, const char * argv[]) {
    string s="abc";
    int n=s.size();
    int i =0;
    vector<string>ans;
    string output="";
    recu(s,i,n,ans,output);
    
    for(auto a:ans){
        cout<<a<<endl;;
    }
}
