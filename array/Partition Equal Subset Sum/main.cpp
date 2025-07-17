//
//  main.cpp
//  Partition Equal Subset Sum
//
//  Created by Adarsh Kathriya on 22/06/25.
//

#include <iostream>
#include<vector>
using namespace std;

vector<int> PrefixSum( vector<int> &arr,int &n){
    vector<int> prefixsum(n);
    prefixsum[0]=arr[0];
    for(int i =1;i<n;i++){
        prefixsum[i]=arr[i]+prefixsum[i-1];
    }
    return prefixsum;
    
}

bool PartitionPossible(vector<int>prefixsum, int n){
    bool a=false;
    for(int i=0;i<n;i++){
        if(2*prefixsum[i]==prefixsum[n-1]){
            a=true;
        }
    }
    return a;
}

int main(int argc, const char * argv[]) {
    vector<int>arr=    {10, 5, 5};
    int n=arr.size();
    vector<int> prefixsum=PrefixSum(arr,n);
    for(auto a:prefixsum){
        cout<<a<<" ";
    }
    cout<<endl<<endl;
    
    cout<<"Is partition possible : "<<boolalpha<<PartitionPossible(prefixsum, n)<<endl;

    
}
