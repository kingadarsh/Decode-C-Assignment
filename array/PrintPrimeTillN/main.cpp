//Print all prime numbers up to N

#include<iostream>
#include<vector>
using namespace std;
int main( ){
    int n;cin>>n;
    vector<int>ans;
    
    for(int i=2;i<=n;i++){
        int count=0;
        for(int j=2;j<=n;j++){
            if(i%j==0){
                count++;
            }

        }
        if(count<=1){
            ans.push_back(i);
        }
    }
    
    for(auto v:ans){
        cout<<v<<" ";
    }
}
