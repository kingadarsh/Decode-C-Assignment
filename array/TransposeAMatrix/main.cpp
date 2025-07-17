#include<iostream>
using namespace std;

int main( ){
    int transpose[3][3];
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int r=sizeof(arr)/sizeof(arr[0]);
    int c=sizeof(arr[0])/sizeof(arr[0][0]);
    
    cout<<"Before Troanspose"<<endl;
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    
    cout<<"After  Troanspose"<<endl;
    
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<transpose [i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
