
#include <iostream>
#include<cctype>
using namespace std;

int main(int argc, const char * argv[]) {
    string str=".,";
    
    int l=0,r=str.length()-1;
    bool a=true;
    while(l<r){
        while (l<r && !isalpha(str[l])){
            l++;
        }
        while(l<r && !isalpha(str[r])){
            r--;
        }
        if(tolower(str[l])!=tolower(str[r])){
            cout<<str[l]<<"-->"<<str[r]<<endl;
            a=false;
        }
        l++;r--;
    }
    
    cout<<boolalpha<<a<<endl;
}
