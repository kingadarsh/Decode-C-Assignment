
#include<iostream>
#include<vector>
using namespace std;

int funcSmax(vector<int>arr,int n){
    int max=INT_MIN;
    int Smax=INT_MIN;

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            Smax=max;
            max=arr[i];
        }

        if(arr[i]<max && Smax<arr[i]){
            Smax=arr[i];
        }
    }
    return Smax;
}


int funcSmin(vector<int>arr,int n){
    int min=INT_MAX;
    int Smin=INT_MAX;

    for(int i =0;i<n;i++){
        if(min>arr[i]){
            Smin=min;
            min=arr[i];
        }

        if(arr[i]>min && Smin>arr[i]){
            Smin=arr[i];
        }
    }
    return Smin;
    
}


int main( ){
    vector<int>arr={1, 2, 3, 4, 5 ,6, 7, 8, 9 ,10  };
    int n=arr.size( );
    int Smin=funcSmin(arr,n);
    int Smax=funcSmax(arr,n);
    
    cout<<" "<<Smax<<" "<<Smin<<endl;
}
