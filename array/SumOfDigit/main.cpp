#include<iostream>
using namespace std;
int main( ){
    int num;cin>>num;
    if(num <1){
        cout<<"The sum of digits of a number is :"<<num<<endl;
    }

    
    int sum=0;
    
    while(num!=0){
        int last=num%10;
        sum+=last;
        num=num/10;
    }
    
    
    cout<<"the sum of digit is : "<<sum;
    
}
