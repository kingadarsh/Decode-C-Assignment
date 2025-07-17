//
//  main.cpp
//  ValidateThere are Alphabets in str
//
//  Created by Adarsh Kathriya on 08/05/25.
//

#include <iostream>
using namespace std;
bool recu(string &str, int &i){
    if(i>=str.size()){
        return false;
    }
    if(isalpha(str[i])){
        return true;
    }
    i=i+1;
    return recu(str,i);
    
}
int main(int argc, const char * argv[]) {
    string str="12dr14w";
    int i=0;
    if(recu(str,i)){
        cout<<"Alphabets exists";
    }else{
        cout<<"Alphabets does not exists";
    }
    
    
    
}
