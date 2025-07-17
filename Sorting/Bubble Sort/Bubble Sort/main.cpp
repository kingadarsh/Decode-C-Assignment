// Optimized bubble sort.By using flag.
//Bubble sort is an stabal algorithm, mean when an array is sorted using bubble sort its element does not loses there relative order.

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int>arr={5,2,4,1,3};
    bool flag=true;
    int j=0;
    while(j<arr.size()-1){
        for(int i=0;i<arr.size()-1-j;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                flag=false;
            }
        }
        j++;
        if(flag==true){
            break;
        }
    }
    
    for(auto a:arr){
        cout<<a<<" ";
    }
}
