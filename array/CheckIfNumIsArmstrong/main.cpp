/*

Examples of Armstrong Numbers:
 
153 (3-digit number)

1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 15313 +53 +33 =1+125+27=153 ✅ Armstrong number
 
9474 (4-digit number)

9^4 + 4^4 + 7^4 + 4^4 = 6561 + 256 + 2401 + 256 = 947494+44+74+44=6561+256+2401+256=9474 ✅ Armstrong
 number
 
123 (3-digit number)

1^3 + 2^3 + 3^3 = 1 + 8 + 27 = 36 \neq 12313+23+33=1+8+27=36=123❌ Not an Armstrong number
 
 */

#include <iostream>
using namespace std;
int main( ){
    int n;cin>>n;
    int f=n;
    int comp=n;
    int count=0;
    
    while(n!=0){
        count++;
        n/=10;
    }
    
    cout<<"The number of digits in the numbers are : "<<count<<endl;
    
    int armNum=0;
    while(f!=0){
        int last=f%10;
        armNum=armNum+pow(last,count);
        f/=10;
    }
    
    if(comp==armNum){
        cout<<"The number is an armstrong"<<endl;
    }
    else{
        cout<<"the number is not an  armstrong"<<endl;
    }
}

