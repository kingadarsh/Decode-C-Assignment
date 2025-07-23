//
//  main.cpp
//  Leetcode 2586. Count the Number of Vowel Strings in Range
//
//  Created by Adarsh Kathriya on 18/07/25.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<string>arr = {"are","amy","u"};
    int count=0;
    for(int i=0;i<arr.size();i++){
        if((arr[i].front()==('a'||'e'||'i'||'o'||'u')) && (arr[i].back()==('a'||'e'||'i'||'o'||'u'))){
            count++;
        }
    }
    
    cout<<count;
    
}
