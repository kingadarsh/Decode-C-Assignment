//Print numbers 1 to N using recursion.

#include<iostream>
using namespace std;
int recu(int n,int m,int &i,int &ans){
    
    if(i>n || i>m) return -1;
    
    if(n%i==0 && m%i==0){
        ans=i;
    }
    i=i+1;
    recu(n,m,i,ans);
    return ans;
    
}

int main(){
    int n;cin>>n;
    int m;cin>>m;
    int i =1;
    int ans=0;
    recu(n,m,i,ans);
    cout<<ans;
    
}
