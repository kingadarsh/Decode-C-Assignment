//
//  main.cpp
//  PrintDigits
//
//  Created by Adarsh Kathriya on 13/03/25.
//

#include <iostream>
using namespace std;

int recu(int n, int sum){
    
    if(n==0)return sum;
    
    
    int i =n%10;
    sum+=i;
    return recu(n/10,sum);
    
    
}

int main(int argc, const char * argv[]) {
    int n;cin>>n;
    int sum =0;
    int ans= recu(n,sum);
   
    cout<<ans;
}
