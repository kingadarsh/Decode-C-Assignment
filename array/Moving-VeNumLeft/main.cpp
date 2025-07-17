#include<iostream>
#include<vector>
using namespace std;

void functionToAction(vector<int>arr,int n){
    int s=0,e=n-1;
    while(s<e){
        if(arr[s]<0){
            s++;
        }
        else if(arr[e]>=0){
            e--;
        }
        else{
            swap(arr[s],arr[e]);
        }
        
    }
    
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
}


int main( ){
    vector<int>arr{1,2,-3,4,-5,-6,8,-9};
    int n=arr.size();
    
    
//    int i=0, j=n-1;
//    int k=0;
//    while(i!=j){
//        if(arr[k]<0){
//            swap(arr[k++],arr[i++]);
//        }
//        else if(arr[k]>=0){
//            swap(arr[k ],arr[j--]);
//        }
    

/*
 Even better approach which requires less number of variables and hence it is a better space complexity
 */

functionToAction(arr,n);

   
}
