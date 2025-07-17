//
//  main.cpp
//  RecuBinarySearch
//
//  Created by Adarsh Kathriya on 29/03/25.
//

#include <iostream>
using namespace std;

int recu(int arr[],int &n,int &k,int &s,int& e){
    int mid=(s+e)/2;
    
    if(s>e) return -1;
    
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]<k){
        int val=mid+1;
        return recu(arr,n,k,val,e);
    }
    else{
        int val2=mid-1;
        return recu(arr,n,k,s,val2);
    }
    
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[]={1,2,3,6,7,8,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int k=7;
    int s=0,e=n-1;
    
    int ans= recu(arr,n,k,s,e);
    cout<<ans;
    
    
    
}
