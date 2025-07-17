#include<iostream>
#include<vector>
using namespace std;
int main( ){
    vector<int>arr={1, 2, 2, 3, 3, 3, 4,4, 5, 5 };
    int n=arr.size( );
    int j=0;
    
    for(int i =1;i<n;i++){
        if(arr[i-1]!=arr[i]){
            j++;
        }
        
        arr[j]=arr[i];
    }
    
    cout<<j+1;
}
