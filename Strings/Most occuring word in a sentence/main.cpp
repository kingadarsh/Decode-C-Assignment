//
//  main.cpp
//  Most occuring word in a sentence
//
//  Created by Adarsh Kathriya on 21/07/25.
//

#include <iostream>
#include<sstream>
using namespace std;

int main(int argc, const char * argv[]) {
    string str="I love leetcode . I love its daily coding";
    stringstream s(str);
    string temp;
    vector<string>arr;
    
    while(s>>temp){
        arr.push_back(temp);
    }
    for(auto a:arr){
        cout<<a<<endl;
    }
    cout<<endl<<endl;
    
    sort(arr.begin(),arr.end());
    
    for( int i =1;i<arr.size();i++){
        if(arr[i]==arr[i-1]){
            cout<<arr[i]<<endl;
        }
    }
    
}
