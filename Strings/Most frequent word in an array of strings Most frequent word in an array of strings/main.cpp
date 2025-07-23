//
//  main.cpp
//  Most frequent word in an array of strings Most frequent word in an array of strings
//
//  Created by Adarsh Kathriya on 22/07/25.
//

#include <iostream>
#include<map>
#include<vector>
using namespace std;



int main(int argc, const char * argv[]) {
    string arr[]={"geeks","for","geeks"};
    int n=sizeof(arr)/sizeof(arr[0]);
       
    map<string,int>hashmap;
    map<string,int>indx;
    vector<string>temp;
    
//  hashmap bharo
    for(int i=0;i<n;i++){
        hashmap[arr[i]]++;
    }
//    Printing it
    for(auto i=hashmap.begin();i!=hashmap.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    cout<<endl<<endl;
    
//    finding max
    int max=0;
    for(auto i=hashmap.begin();i!=hashmap.end();i++){
        if(max<i->second){
            max =i->second;
        }
    }
//    Printing it
    cout<<max<<endl<<endl;
    
    
//    Filling Temp
    for(auto i=hashmap.begin();i!=hashmap.end();i++){
        if(max==i->second){
            temp.push_back(i->first);
        }
    }
//    Printing it
    for(auto i:temp){
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    
    
    
//    Filling indx
    for(auto i=0;i<n;i++){
        if(indx.find(arr[i])==indx.end()){
            indx[arr[i]]=i;
        }
    }
//    Printing it
    for(auto i=indx.begin();i!=indx.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    cout<<endl<<endl;
    
//Finally ans is here
    int findMaxindx=0;
    string finalans="a";
    
    for(int i =0;i<temp.size();i++){
        if(indx.find(temp[i])!=indx.end()){
            auto it=indx.find(temp[i]);
            if(findMaxindx<it->second){
                findMaxindx=it->second;
                finalans=it->first;
            }
        }
    }
    
    cout<<"The final answer is : "<<finalans;
    
}
