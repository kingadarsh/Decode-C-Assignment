//
//  main.cpp
//  ROUGH
//
//  Created by Adarsh Kathriya on 27/06/25.
//

#include <iostream>
#include<vector>
#include<unordered_set>

#include<map>
using namespace std;


int main(int argc, const char * argv[]) {
    vector<int> a={1,2,4,5};
    int n=a.size();
//    vector<int> b={2,2,2};
//    
//    vector<int>ans;
//    unordered_set<int>temp(b.begin(),b.end());
//    
//
//    for( int i =0;i<a.size();i++){
//        if(temp.find(a[i])!=temp.end()){
//            ans.push_back(a[i]);
//        }
//    }
//    
//    
//    for(auto a:ans){
//        cout<<a<<" ";
//    }
    
    
    int xor1=0;
    int xor2=0;
    cout<<n<<endl;
    for(int i =0;i<n-1;i++){
        xor1^=a[i];
        xor2^=i+1;
    }
    xor2^=n;
    
    cout<<(xor1^xor2)<<" "<<endl;
           
    
//    cout<<sum<<" "<<sumArr<<endl;
    
    
    
    

    
           
         
    
    
    
}



