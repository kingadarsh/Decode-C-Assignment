//
//  main.cpp
//  SubSequesnce Of a String
//
//  Created by Adarsh Kathriya on 29/03/25.
//

#include <iostream>
#include<vector>
using namespace std;

void recu(string str,string ans,int i,vector<string>& arr){
//base case
    int l=str.size( );
    if(i==l){
        arr.push_back(ans);
        return;
    }
    
//exclude
    
    recu(str,ans,i+1,arr);
    
    
    
    
//include
    
    ans=ans+str[i];
    recu(str,ans,i+1,arr);
    
    
}

int main(int argc, const char * argv[]) {
    string str; cin>>str;
    
    string ans=" ";
    int i =0;
    vector<string>arr;
    recu(str,ans,i,arr);
    
    for(auto a:arr){
        cout<<a<<endl;
    }
}
