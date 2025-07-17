#include<iostream>
using namespace std;
int main( ){
    int n;
    cout<<"Give the number : ";
    cin>>n;
    int rev=0;
    while(n!=0){
        int last=n%10;
        rev=rev*10+last;
        n=n/10;
    }
    cout<<"The number is reversed is : "<<rev<<endl;

}
