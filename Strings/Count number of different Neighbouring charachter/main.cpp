//
//  main.cpp
//  Count number of different Neighbouring charachter
//
//  Created by Adarsh Kathriya on 20/07/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int cnt=0;
    string str;cin>>str;
    for(int i=1;i<str.length();i++){
        if(str[i]!=str[i-1]){
            cnt++;
        }
    }
    
    cout<<cnt;
}
