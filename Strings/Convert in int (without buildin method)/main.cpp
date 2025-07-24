/*
 
 Input a string of length less than 10 and convert it into integer without using builtin function.

 Input : "3244"
 Output : 3244

 Input : "12"
 Output : 12
 
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s="3244";
    int ans=0;
    for(int i=0;i<s.size();i++){
        int ascii=s[i]-'0';
        if(i==s.size()-1 ){
            ans=ans+ascii;
        }else{
            
            ans=(ans+ascii)*10;
        }


        
    }
//    cout<<s[0]-'0'<<endl;
    cout<<ans<<endl;
    
}
