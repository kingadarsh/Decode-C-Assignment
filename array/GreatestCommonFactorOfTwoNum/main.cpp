#include<iostream>
#include<cmath>
using namespace std;
int main( ){
    int n1,n2;cin>>n1>>n2;
    int i=1;
    int ans=1;
    while(i<=min(n1,n2)){
        if(n1%i==0 && n2%i==0){
            ans =i;
        }
        i++;
    }

    cout<<ans<<endl;
    
}
