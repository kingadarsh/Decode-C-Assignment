#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int>v={2,7,11,15};
    unordered_map<int,int>umap;
    int t = 9;
    
    for(int i =0;i<v.size();i++){
        if(umap.find(t-v[i])==umap.end()){
            umap[v[i]]=i;
        }
        if(umap.find(t-v[i])!=umap.end()){
            cout<<"Found ans"<<endl;
        }
    }
    
    for(auto &i :umap){
        cout<<i.first<<"and value "<<i.second<<endl;
    }
}
