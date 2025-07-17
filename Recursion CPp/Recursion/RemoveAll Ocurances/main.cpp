//
//  main.cpp
//  RemoveAll Ocurances
//
//  Created by Adarsh Kathriya on 08/05/25.
//

#include <iostream>
using namespace std;
void recu(string &s,string & sub){
    int pos=s.find(sub);
    if(pos==string::npos){
        return;
    }
    
    if(pos!=string ::npos){
        s.erase(pos,1);
    }
    
    recu(s,sub);
    

    
}

int main(int argc, const char * argv[]) {
    string s="adarsh";
    string sub;cin>>sub;
    
    recu(s,sub);
    cout<<s;
    
}
