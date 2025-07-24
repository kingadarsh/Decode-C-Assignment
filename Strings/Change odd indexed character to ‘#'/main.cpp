//
//  main.cpp
//  Change odd indexed character to ‘#'
//
//  Created by Adarsh Kathriya on 24/07/25.
//

/*
 
 
 Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based indexing.

 Input : str = "Pbwcshkuiglhlds"
 Output : "P#w#s#k#i#l#l#s"

 Input : str = "a"
 Output : "a"

 
 
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string str = "Pbwcshkuiglhlds";
    
    for (int i=0;i<str.length();i++){
        if(i%2!=0){
            str[i]='#';
        }
        else{
            continue;
        }
    }
    
    cout<<str<<endl;
    
}
