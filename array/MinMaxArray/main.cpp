#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>arr){
    int n=arr.size();
    int num=arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]<num){
            num=arr[i];
        }
    }
    
    
    return num;
}

int findMax(vector<int>arr){
    int n=arr.size();
    int num=arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>num){
            num=arr[i];
        }
    }
    
    return num;
}

int main(){
    vector<int> arr = {10000};

    int min=findMin(arr);
    int max=findMax(arr);
    
    cout<<min<<" "<<endl<<max<<endl;
}
