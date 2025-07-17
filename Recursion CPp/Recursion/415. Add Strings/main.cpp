/*
 
 
 
 415. Add Strings
 Easy
 Topics
 Companies
 Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

 You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

  

 Example 1:

 Input: num1 = "11", num2 = "123"
 Output: "134"
 Example 2:

 Input: num1 = "456", num2 = "77"
 Output: "533"
 Example 3:

 Input: num1 = "0", num2 = "0"
 Output: "0"

 
 
 */

#include <iostream>
using namespace std;
void recu(string &num1,int p1,string &num2,int p2,string &ans,int carry=0){
    if(p1<0 && p2<0){
        if(carry!=0){
            ans.push_back(carry+'0');
        }
        return;
    }
    
    
    int n1=(p1>=0?num1[p1]:'0')-'0';
    int n2=(p2>=0?num2[p2]:'0')-'0';
    int carrySum=n1+n2+carry;
    int digit = carrySum%10;
    carry=carrySum/10;
    ans.push_back(digit+'0');
    
    
    recu(num1,p1-1,num2,p2-1,ans,carry);
    
}

int main(int argc, const char * argv[]) {
    string num1 = "11", num2 = "123";
    int p1=num1.length()-1,p2=num2.length()-1;
    string ans=" ";
    
    recu(num1,p1,num2,p2,ans);
    reverse(ans.begin(),ans.end());
    cout<<ans;

    
    
}

//
//
//#include<iostream>
//using namespace std;
//
//
//int main(){
//    string num1="1";
//    string num2="9";
//    
//    int p1=num1.size()-1;
//    int p2=num2.size()-1;
//    
//    int carry=0;
//    
//    string ans="";
//    
//    while(p1>=0 || p2>=0){
//        int n1=(p1>=0?num1[p1]:'0')-'0';
//        int n2=(p2>=0?num2[p2]:'0')-'0';
//        
//        int Csum= n1+n2+carry;
//        int digit=Csum%10;
//        carry=Csum/10;
//        ans.push_back(digit+'0');
//        p1--;p2--;
//    }
//    
//    reverse(ans.begin(),ans.end());
//    
//    cout<<ans;
//    
//}
