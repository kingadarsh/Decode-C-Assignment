

#include <iostream>
using namespace std;

bool isSafe(int i,int j,int &r,int &c,int arr[][5],vector<vector<bool>>&visited){
    bool a=false;
    if(((i>=0 && i<r) && (j>=0 && j<c))
       && (visited[i][j]!=true) &&
       arr[i][j]==1 ){
        a=true;
    }
    return a;
}

void recu( int arr[5][5],int &r,int &c,vector<vector<bool>>&visited,string output,vector<string>&ans,int i=0,int j=0){
    
    if(i>=r-1&&j>=c-1){
        ans.push_back(output);
        return;
    }
    
    
//    Down i+1,j
    if(isSafe(i+1,j,r,c,arr,visited)){
        visited[i+1][j]=true;
        recu(arr,r,c,visited,output+'D',ans,i+1,j);
        visited[i+1][j]=false;
    }
    
// Up
    if(isSafe(i-1,j,r,c,arr,visited)){
        visited[i-1][j]=true;
        recu(arr,r,c,visited,output+'U',ans,i-1,j);
        visited[i-1][j]=false;
    }
    
    
    
// Right
    if(isSafe(i,j+1,r,c,arr,visited)){
        visited[i][j+1]=true;
        recu(arr,r,c,visited,output+'R',ans,i,j+1);
        visited[i][j+1]=false;
    }
    
    
    
//Left
    if(isSafe(i,j-1,r,c,arr,visited)){
        visited[i][j-1]=true;
        recu(arr,r,c,visited,output+'L',ans,i,j-1);
        visited[i][j-1]=false;
    }
    
}

int main() {
    int arr[5][5]={ {1, 1, 1, 0, 1},
                    {1, 0, 1, 1, 1},
                    {0, 0, 1, 1, 1},
                    {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 1}};

    
    int r=5,c=5;
    
    vector<vector<bool>>visited(r,vector<bool>(c,false));
    visited[0][0]=true;
    string output="";
    vector<string>ans;
    int i=0,j=0;
    
    recu(arr,r,c,visited,output,ans,i,j);
    
    for( auto a:ans){
        cout<<a<<endl;
    }
}
