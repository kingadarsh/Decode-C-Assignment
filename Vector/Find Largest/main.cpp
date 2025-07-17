//
//  main.cpp
//  Find Largest
//
//  Created by Adarsh Kathriya on 08/07/25.
//

//          1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[4][4];
    
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    
    
    int max=INT_MIN;
    
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<endl;
    cout<<max;
}
