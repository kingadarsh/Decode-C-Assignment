//
//  main.cpp
//  Vector
//
//  Created by Adarsh Kathriya on 08/07/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // Initilization
    int arr[][3]={{11,12,13},{21,22,23},{31,32,33}};
    for(auto &a:arr){
        for(auto i :a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl<<"Also this way of declaration"<<endl<<endl;
    
    int brr[][3]={11,12,13,21,22,23,31,32};
    for(auto &a:brr){
        for(auto i :a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}
