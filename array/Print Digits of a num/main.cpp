

#include <iostream>
using namespace std;

void recu(int n){
    if(n==0) return;
    
    
    recu(n/10);
    cout<<n%10<<endl;
}
int main(int argc, const char * argv[]) {
    int n;cin>>n;
    
    recu(n);
}
