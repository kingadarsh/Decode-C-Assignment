#include<iostream>
using namespace std;
int main( ){
    int n;cin>>n;
    int count=0;
    
    while (n!=0) {
        count++;
        n/=10;
    }
    
    cout<<"The number of digits in the number are: "<<count<<endl;
}
