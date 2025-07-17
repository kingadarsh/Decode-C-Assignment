//
//  main.cpp
//  ReverseStr
//
//  Created by Adarsh Kathriya on 08/05/25.
//

#include <iostream>
using namespace std;
void recu(string &s,int &i,int &e){
    if(i>=e){
        return;
    }
    
    swap(s[i],s[e]);
    i=i+1;e=e-1;
    recu(s,i,e);
}

int main(int argc, const char * argv[]) {
    string s="Adarsh";
    int i=0,e=s.size()-1;
    recu(s,i,e);
    cout<<s;
}
