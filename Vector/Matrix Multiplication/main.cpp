//
//  main.cpp
//  Matrix Multiplication
//
//  Created by Adarsh Kathriya on 11/07/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
//
//    int r1;cin>>r1;
//    int c1;cin>>c1;
//    int r2;cin>>r2;
//    int c2;cin>>c2;

//
//    vector<vector<int>> a(r1,vector<int>(c1));
//    vector<vector<int>> b(r2,vector<int>(c2));
    
//    
//    for(int i=0;i<r1;i++){
//        for(int j=0;j<c1;j++){
//            cin>>a[i][j];
//        }
//    }
//
//    for(int i=0;i<r2;i++){
//        for(int j=0;j<c2;j++){
//            cin>>b[i][j];
//        }
//    }
    
    vector<vector<int>> a={{1, 4}, {2, 5}, {3, 6}};
    vector<vector<int>> b={{7, 8, 9, 10}, {11, 12, 13, 14}};
    int r1=a.size();
    int c1=a[0].size();
    int r2=b.size();
    int c2=b[0].size();
    
//    ------------------------------------------------------------------------
    
    cout<<endl<<r1<<"x"<<c1<<endl<<r2<<"x"<<c2<<endl;
    cout<<endl;
    
    if(c1!=r2){
        cout<<"The matrix multiplication is not possible"<<endl;
    }
    
    vector<vector<int>>ans(r1,vector<int>(c2,0));
    

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r2;k++){
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    
    
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
