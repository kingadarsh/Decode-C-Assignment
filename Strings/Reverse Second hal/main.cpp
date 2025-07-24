/*
 
 Input a string of even length and reverse the second half of the string.

 Input : str = "abcdefgh"
 Output : abcdhgfe

 Input : str = "pwians"
 Output : pwisna
 
 
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;getline(cin,s);
    int n=s.size();
    reverse(s.begin()+n/2,s.end());
    
    cout<<s<<endl;
    
}
