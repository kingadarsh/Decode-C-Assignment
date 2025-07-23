//
//  main.cpp
//  <SSTREAM>LIB
//
//  Created by Adarsh Kathriya on 21/07/25.
//

#include <iostream>
#include<sstream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s="My name is adarsh";
    stringstream str(s);
//    while(str>>)
    string temp;
    
    
    while(str>>temp){
        cout<<temp<<endl;
    }
    
    
    
}
