//
//  main.cpp
//  ClimbingStairs
//
//  Created by Adarsh Kathriya on 28/03/25.
//

#include <iostream>
using namespace std;

int recu(string str,int l,int i,char m,int &ans){
    if(i==l) return 0;
    
    if(tolower(str[i])==m){
        ans++;
    }
//    cout<<ans<<endl;
    
    recu(str,l,i+1,m,ans);
    
    return ans;
}

int main(int argc, const char * argv[]) {
    string str="Adaarsh";
    int i =0;
    char m ='a';
    int l=str.length();
    int k=0;
    int ans = recu(str,l,i,m,k);
    
    cout<<ans;
    
}
