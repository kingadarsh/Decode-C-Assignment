//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int>arr={8,6,3,2,5,4};
    
    for(int i=0;i<arr.size()-1;i++){
        int min=INT_MAX;
        int inx=-1;
        
        for(int j=i;j<arr.size();j++){
            if(min>arr[j]){
                min=arr[j];
                inx=j;
            }
        }
        swap(arr[i],arr[inx]);
    }
    for(auto a:arr){
        cout<<a<<" ";
    }
}
