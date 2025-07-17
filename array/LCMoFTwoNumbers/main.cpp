#include<iostream>
#include<cmath>
using namespace std;
int main( ){
    int a,b;cin>>a>>b;
    int small=min(a,b);
    int grt=max(a,b);
    int ans=0;
    
    for(int i=grt;;i+=grt){
        if(i%small==0){
            ans=i;
            break;
        }
    }
    
    cout<<"the LCM is : "<<ans<<endl;
}
