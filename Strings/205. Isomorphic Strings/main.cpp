//
//  main.cpp
//  205. Isomorphic Strings
//
//  Created by Adarsh Kathriya on 23/07/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s = "egg", t = "add";
    vector<int>temp(128,1000);
    
    
    for(int i=0;i<s.length();i++){
        int idx=int(s[i]);
        if(temp[idx]==1000) temp[idx]=s[i]-t[i];
        else if(temp[idx]!=s[i]-t[i]){
            cout<<false;
            break;
        }
        
//        temp[idx]=s[i]-t[i];
        
    }
    
    
    for(auto a:temp){
        cout<<a<<" ";
    }
    cout<<endl;
    
    
}
