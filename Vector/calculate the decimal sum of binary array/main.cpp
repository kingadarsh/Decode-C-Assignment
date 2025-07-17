//
//  main.cpp
//  calculate the decimal sum of binary array
//
//  Created by Adarsh Kathriya on 17/07/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<int>arr={1,1,0,0,1,0,1};
    
    int sum=0;
    int x=1;
    
    for(int i=arr.size()-1;i>=0;i--){
        sum+=arr[i]*x;
        x*=2;
    }
    
    cout<<sum;
    
}
