//
//  main.cpp
//  Superior Elements
//
//  Created by Adarsh Kathriya on 03/03/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> a = {16 ,17 ,4 ,3 ,5 ,2};
    vector<int>v;
    int m=0;int n=a.size();

    for(int i =n-1;i>=0;i--){
        if(a[i]>m){
            v.push_back(a[i]);
        }
        m=max(m,a[i]);
    }

    for(int i:v){
        cout<<i<<" ";
    }
}



