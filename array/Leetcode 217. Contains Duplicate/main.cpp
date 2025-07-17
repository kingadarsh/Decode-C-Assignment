#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> arr={1,2,3};
    int n=arr.size();
    unordered_map<int, int>Umap;
    
    for(int i=0;i<n;i++){
        Umap[arr[i]]++;
    }
    
    bool ans=true;
    for(auto val:Umap){
        if(val.second >1){
            ans=false;
        }
    }

    cout<<boolalpha<<ans;

    
    
}
