//
//  main.cpp
//  Faxtorial
//
//  Created by Adarsh Kathriya on 12/03/25.
//

#include <iostream>
using namespace std;

int recu(int n){
    if (n==0) return 1;
    
    return n*recu(n-1);
}

int main(int argc, const char * argv[]) {
    int n;cin>>n; 
    
    int ans = recu(n);
    cout<<ans;
}
