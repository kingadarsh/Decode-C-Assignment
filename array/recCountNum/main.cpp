



#include<iostream>
#include<vector>
using namespace std;

void recu(int n){
    
    if(n==0)return ;
    
    n=n-1;
    recu(n);
    cout<<n<<" ";
}

int main( ){
//    vector<int>vec={1,2,3,4};
//    int n =vec.size( );
    int n;cin>>n;
    recu(n);
}
