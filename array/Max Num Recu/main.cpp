
#include <iostream>
#include <vector>
using namespace std;
//int i =0;
int recu(vector<int>arr,int n, int i,int m ){
    if(i==n) return m;
    
    if(m<arr[i]){
        m=arr[i];
    }
    i=i+1;
    return recu(arr,n,i,m);
    
}

int main(int argc, const char * argv[]) {
    vector<int>arr={1,2,3,4,0,9,5,0,-1,-8};
    int n=arr.size();
    int i =0;
    int m = INT_MIN;
    int ans= recu(arr,n,i,m);
    
    cout<<ans;
}
