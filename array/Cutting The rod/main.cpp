//
//  main.cpp
//  Cutting The rod
//
//  Created by Adarsh Kathriya on 03/04/25.
//

#include <iostream>
#include<limits.h>
using namespace std;
int recu(int target,int x,int y,int z){
    if(target==0)return 0;
    if(target<0) return INT_MIN;
    
    int ans1=recu(target-x,x,y,z)+1;
    int ans2=recu(target-y,x,y,z)+1;
    int ans3=recu(target-z,x,y,z)+1;
    
    int ans=max(ans1,max(ans2,ans3));
    return ans;
    
}

int main(int argc, const char * argv[]) {
    int target=7;
    int x=5,y=2,z=2;
    
    int ans=recu(target,x,y,z);
    cout<<ans;
}
