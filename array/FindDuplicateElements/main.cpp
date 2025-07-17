#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,3,5,3,4};
    int n=arr.size();
    
    for(int i =0;i<n;i++){
//        cout<<"This is the start of the loop and the i :"<<" "<<i<<endl;
        int index=abs(arr[i])-1;
//        cout<<"This is the arr[i]-1 :"<<" "<<arr[i]-1<<endl;
//        cout<<"This is the index :"<<" "<<index<<endl;
        
        if(index<0){
            continue;
        }
        
        if(arr[index]<0){
            cout<<arr[i]<<" "<<endl;
        }
        else{
            arr[index]=arr[index]*-1;
        }
        
//        cout<<"This is the arr[index] : "<<" "<<arr[index]<<" "<<endl;
    }
    
    for(int i =0;i<n;i++){
       
    }
    
    
    
}
 
