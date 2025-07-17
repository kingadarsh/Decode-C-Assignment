#include<iostream>
#include<climits>
using namespace std;

int maxEle(int arr[][3],int r,int c){
    int max=INT_MIN;
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j])max=arr[i][j];
        }
    }
    return max;
}

int main( ){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=sizeof(arr)/sizeof(arr[0]);
    int columns=sizeof(arr[0])/sizeof(arr[0][0]);
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int max=maxEle(arr,rows,columns);
    cout<<endl<<endl<<max;
    
}
