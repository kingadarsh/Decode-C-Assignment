//
//  main.cpp
//  First & Last occurance
//
//  Created by Adarsh Kathriya on 08/05/25.
//

#include <iostream>
using namespace std;
void recu(string &s,char &sub,int &f,int &l,int &i){
    if(i>=s.size())return;
    
    if(f==-1 && s[i]==sub){
        f=i;
    }
    if(s[i]==sub){
        l=i;
    }
    i=i+1;
    recu(s,sub,f,l,i);
}

int main(int argc, const char * argv[]) {
    string s="adarsjaafkwegwakkrgegv";
    char sub='a';
    int f=-1,l=0,i=0;
    
    recu(s,sub,f,l,i);
    cout<<f<<" "<<l<<endl;
    
}
