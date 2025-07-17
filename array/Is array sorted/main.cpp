//
//  main.cpp
//  Is array sorted
//
//  Created by Adarsh Kathriya on 29/03/25.
//

#include <iostream>
using namespace std;
bool recu(int arr[],int n,int i){
    if(i==n-1) return true;
    
    if(arr[i+1]<arr[i]) return false;
    
    return recu(arr,n,i+1);
    
    
    
}

int main(int argc, const char * argv[]) {
    int arr[]={1,1,1,1};
    int i=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    bool ans =recu(arr,n,i);
    
    cout<<boolalpha<<ans<<endl;
}
