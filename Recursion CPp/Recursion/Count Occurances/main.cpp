
#include <iostream>
using namespace std;
void recu(string &str,char &sub,int &i,int &count){
    if(i>=str.size())return;
    if(tolower(str[i])==tolower(sub)){
        count++;
    }
    i=i+1;
    recu(str,sub,i,count);
    
}

int main(int argc, const char * argv[]) {
    string str="abcababaccacaaca";
    char sub;cin>>sub;
    
    int i =0;
    int count=0;
    recu(str,sub,i,count);
    cout<<count;
    
}

