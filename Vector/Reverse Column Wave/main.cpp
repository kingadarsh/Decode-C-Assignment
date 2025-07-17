
/*
 
 1 2 3
 4 5 6
 7 8 9
 
 ---------- OUTPUT ----------
 7 4 1 2 5 8 9 6 3
 
 */

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>>arr={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n=arr.size();
   
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=n-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=0;j<n;j++){
                cout<<arr[j][i]<<" ";
            }

        }
    }
    
//    cout<<arr[2][0];
    
}
