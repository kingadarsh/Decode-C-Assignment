//
//  main.cpp
//  Leetcode 2160
//
//  Created by Adarsh Kathriya on 24/07/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num=2932;
    vector<int>v(4);
//    int z=num%10;num/10;
//    int oo=num%10;num/10;
//    int ten=num%10;num/10;
//    int th=num;
//    v[0]=z;v[1]=oo;v[2]=ten;v[3]=th;
    int i=0;
    while(num){
        int d=num%10;
        v[i++]=d;
        num=num/10;
    }
    
    for(int i:v){
        cout<<i<<" ";
    }
    sort(v.begin(),v.end());
    int num1=0;int num2=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            num1=num1*10+v[i];
        }
        else{
            num2=num2*10+v[i];
        }
    }
    
    cout<<num1<<" "<<num2<<" and there sum : "<<num1+num2;

}
