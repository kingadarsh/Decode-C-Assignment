//
//  main.cpp
//  Reverse A String
//
//  Created by Adarsh Kathriya on 06/04/25.
//

#include <iostream>
using namespace std;

void recu(string &str,int s,int e){
    
    if(s>=e){
        return;
    }
    
    swap(str[s],str[e]);
    
    recu(str,s+1,e-1);
    
}


int main(int argc, const char * argv[]) {
    string str="Ada";
    int s=0;
    int e=str.length()-1;
    
    recu(str,s,e);
    cout<<str<<" "<<endl;
}
