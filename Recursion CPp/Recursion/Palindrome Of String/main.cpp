
#include <iostream>
using namespace std;
void recu(string &str,int &i, string &ans){
    if(i>=str.length()){
        return;
    }
    ans.push_back(str[i]);
    
    i=i-1;
    recu(str,i,ans);
}

int main(int argc, const char * argv[]) {
    string str="ada";
    int i =str.length()-1;
    string ans="";
    recu(str,i,ans);
    cout<<ans;
    if(str==ans){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
