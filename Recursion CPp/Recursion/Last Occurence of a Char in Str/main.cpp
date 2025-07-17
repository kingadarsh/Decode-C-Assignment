//
//  main.cpp
//  Last Occurence of a Char in Str
//
//  Created by Adarsh Kathriya on 06/04/25.
//

#include <iostream>
using namespace std;

int recu(string &str,int &i,int &n){
    
    if(i>=str.length()){
        if(n==-1){
            cout<<" There are no occurences"<<endl;
        }
        
        return -1;
    }
    
    
    
    if(tolower(str[i])=='b'){
        n=i;
    }
    i=i+1;
    recu(str,i,n);
    
    
    return n;
}

int main(int argc, const char * argv[]) {
    string str="aaaB";
    int i=0;
    int n=-1;
    
    recu(str,i,n);
    
    cout<<n;
    
}
