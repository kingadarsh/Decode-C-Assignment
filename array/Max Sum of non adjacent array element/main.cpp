

#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
void recu(vector<int>&arr, int i,int sum,int &maxi){
    if(i>=arr.size()){
        maxi=max(maxi,sum);
        return;
    }
    
//exclude
    recu(arr,i+1,sum,maxi);
//include
    recu(arr,i+2,sum+arr[i],maxi);
    
}

                
int main(int argc, const char * argv[]) {
    vector<int>arr={2,1,4,9};
    int i=0;
    int maxi=INT_MIN,sum=0;
    recu(arr,i,sum,maxi);
    cout<<maxi<<endl;
    
    
}
