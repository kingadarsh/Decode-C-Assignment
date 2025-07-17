#include<iostream>
using namespace std;
int main(){
    int count=0;
    int num;cin>>num;
    
    if(num<1){
        cout<<num<<"is not prime"<<endl;
    }
    
    for(int i =0;i<num;i++){
        if(num%i==0){
            count++;
        }
        else{
            continue;
        }
    }
    
    if(count<=2){
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"The number is not Prime"<<endl;
    }
}
