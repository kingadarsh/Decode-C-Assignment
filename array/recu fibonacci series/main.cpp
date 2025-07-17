//
//  main.cpp
//  recu fibonacci series
//
//  Created by Adarsh Kathriya on 05/03/25.
//

#include <iostream>
using namespace std;

int recu(int n){
    if(n==1)return 0;
    if(n==2)return 1;
    
    
    
    return recu(n-1)+recu(n-2);
}

int main(int argc, const char * argv[]) {
    int n;cin>>n;
    
    cout<<n<<"nth term is : "<<recu(n)<<" ";
}
