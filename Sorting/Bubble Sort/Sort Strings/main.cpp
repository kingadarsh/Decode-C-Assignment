///Sort a string in decreasing order of value associated after removal of value smaller than x.


#include <iostream>
using namespace std;

int main() {
    string str="helloworld";
    char x='h';
    string s="";
    
    for(auto a:str){
        if(a>=x){
            s.push_back(a);
        }
    }
    
    cout<<"The string s before sorting is -> "<<s<<endl;
    
    int n=s.size();
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(s[j]<s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
        
    }
    
    cout<<"The string s after sorting is -> "<<s<<endl;
    
    

}
