#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>>a={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int r=a.size();
    int c=a[0].size();
    
    int maxR=r-1,minR=0;
    int maxC=c-1,minC=0;
    
    vector<int>ans(r*c);
    int i=0;
    
    while(i<r*c && minR<=maxR && minC<=maxC){
            
            for(int j=minC;j<=maxC;j++){
                ans[i++] = a[minR][j];
            }
            minR++;
        if(minR>maxR || minC>maxC) break;
            
            for(int j=minR;j<=maxR;j++){
                ans[i++] = a[j][maxC];
            }
            maxC--;
        if(minR>maxR || minC>maxC) break;
            
            for(int j=maxC;j>=minC;j--){
             ans[i++] = a[maxR][j];
            }
            maxR--;
        if(minR>maxR || minC>maxC) break;
            
            for(int j=maxR;j>=minR;j--){
                ans[i++] = a[j][minC];
            }
            minC++;
        if(minR>maxR || minC>maxC) break;

            
        }
    
    for(auto a:ans){
        cout<<a<<" ";
    }
    
    
}
