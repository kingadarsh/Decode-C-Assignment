//
//  main.cpp
//  Max in String array
//
//  Created by Adarsh Kathriya on 23/07/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<string>s={"0123","0023","456","00182","002901"};
    int temp=0;
    int ind=0;
//    int max=0;
    for(int i =0;i<s.size();i++){
        if(temp<stoi(s[i])){
            temp=stoi(s[i]);
            ind=i;
        }
    }
    
    
    cout<<temp<<" "<<s[ind];
}
