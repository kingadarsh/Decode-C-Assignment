#include<iostream>
#include<vector>
using namespace std;
int FindingPivot(vector<int> &arr,int s,int e){
    
    int index=s;
    int count=0;
    for(int i=index+1;i<=e;i++){
        if(arr[i]<=arr[s]){
            count++;
        }
    }
    
    swap(arr[index],arr[s+count]);
    index=s+count;
    
    
    while (s<index && e>index){
        while(arr[s]<=arr[index]) s++;
        while(arr[e]>arr[index]) e--;
        
        if(s<index && e>index){
            swap(arr[s],arr[e]); 
        }
        s++;e--;
    }
    
    
    
    return index;
}


void QuickSort(vector<int> &arr,int s,int e){
    if(s>=e) return;
    
//
    int pivot=FindingPivot(arr,s,e);
    
//    arr 1
    QuickSort(arr,s,pivot-1);
//    arr2
    QuickSort(arr,pivot+1,e);
}

int main(){
    vector<int>arr={8,8,8,2,2,2,5,5,1,20,10,0,10,10,10,10,30};
    
    int n=arr.size();
    
    int s=0,e=n-1;
    QuickSort(arr,s,e);
    
    for(auto a:arr){
        cout<<a<<" ";
    }
}
