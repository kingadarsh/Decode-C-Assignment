#include<iostream>
using namespace std;
int main( ){
    int n;cin>>n;
    long long fact=1;
    while(n!=1){
        fact*=n;
        n--;
    }
    
    cout<<"The factorial is : "<<fact<<endl;
}
