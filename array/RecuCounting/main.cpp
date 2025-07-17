//
//  main.cpp
//  RecuCounting
//
//  Created by Adarsh Kathriya on 12/03/25.
//

#include <iostream>
using namespace std;

void recuCounting(int i){
    if(i==0) return;
    
    
    recuCounting(i);
    cout<< i<<" ";
    i =i-1;
    
    
    
    
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int i;cin>>i;
    
    recuCounting(i);
    
    
}
