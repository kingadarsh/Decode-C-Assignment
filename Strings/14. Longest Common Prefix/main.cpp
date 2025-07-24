
#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<string>s={"flower","flow","flight"};
    int n=s.size();
    sort(s.begin(),s.end());
    
    string f=s[0];
    string l=s[n-1];
    string output="";
    for(int i=0;i<min(f.size(),l.size());i++){
        if(f[i]==l[i]) output+=f[i];
        else{
            cout<<output<<endl;
            break;
        }
    }
    

   
    
    
//    cout<<temp<<" "<<s[ind];
}
