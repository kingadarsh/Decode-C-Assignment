//
//  main.cpp
//  -----Rough-----
//
//  Created by Adarsh Kathriya on 18/07/25.
//

#include<iostream>
using namespace std;

int main(){
    string str;getline(cin,str);
    reverse(str.begin()+2,str.begin()+6);
    
    cout<<str<<endl;
}
