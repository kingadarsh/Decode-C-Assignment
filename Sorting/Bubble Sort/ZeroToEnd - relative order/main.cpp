//Push the zeros to the end while maintaining the relative order of the other elements.


#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int>arr{0, 7, 0, 6, 0, 5};
    int n=arr.size();
    int i=0;
    
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i++],arr[j]);
        }
    }
    
    for(auto a:arr){
        cout<<a<<" ";
    }
    
    
}
