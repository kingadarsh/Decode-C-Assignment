//
//  main.cpp
//  861. Score After Flipping Matrix
//
//  Created by Adarsh Kathriya on 17/07/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>> arr={{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    
    int r=arr.size();
     int c=arr[0].size();

     for(int i=0;i<r;i++){
         if(arr[i][0]==0){
             for(int j=0;j<c;j++){
                 if(arr[i][j]==0)arr[i][j]=1;
                 else arr[i][j]=0;
             }
         }
     }

//    for(auto &a:arr){
//        for(auto i:a){
//            cout<<i<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<endl;
    

     
     for(int i=0;i<c;i++){
         int noz=0,noo=0;
         for(int j=0;j<r;j++){
             if(arr[j][i]==0)noz++;
             else noo++;
         }

         if(noz>noo){
             for(int j=0;j<r;j++){
                 if(arr[j][i]==0)arr[j][i]=1;
                 else arr[j][i]=0;
             }
         }
     }
    
    
    
//    for(auto &a:arr){
//        for(auto i:a){
//            cout<<i<<" ";
//        }
//        cout<<endl;
//    }
    
    int sum=0;
    for(int i=0;i<r;i++){
        int x=1;
        for(int j=c-1;j>=0;j--){
            sum+=arr[i][j]*x;
            x*=2;
        }
    }
    
    cout<<sum;
    
}
