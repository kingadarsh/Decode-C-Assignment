/*
 
 
 
Given an array of integers arr[]. Find the Inversion Count in the array.
Two elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
If an array is sorted in the reverse order then the inversion count is the maximum.

Examples:

Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
Input: arr[] = [2, 3, 4, 5, 6]
Output: 0
Explanation: As the sequence is already sorted so there is no inversion count.
Input: arr[] = [10, 10, 10]
Output: 0
Explanation: As all the elements of array are same, so there is no inversion count.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 104
 
 

*/






#include <iostream>
#include<vector>
using namespace std;


int mergesort(vector<int>&arr,int s,int e){
    int count=0;
    int mid=s+(e-s)/2;
    
    int el=mid-s+1;
    int er=e-mid;
    
    int *larr=new int[el];
    int *rarr=new int[er];
    
    int k=s;
    for(int i=0;i<el;i++){
        larr[i]=arr[k++];
    }
    
    k=mid+1;
    for(int i=0;i<er;i++){
        rarr[i]=arr[k++];
    }
    
    
    int i =0,j=0,z=s;
    
    while(i<el && j<er){
        if(larr[i]<rarr[j]){
            arr[z++]=larr[i++];
        }
        else{
            arr[z++]=rarr[j++];
            count=count+(el-i);
        }
    }
    while(i<el)  arr[z++]=larr[i++];
    while(j<er)  arr[z++]=rarr[j++];
    
    
    return count;
}

int dnc(vector<int>&arr,int s,int e){
    if(s>=e){
        return 0;
    }
    
    int c=0;
    int mid=s+(e-s)/2;
    
//    divide in 2 parts
    // Part 1
     c+=dnc(arr,s,mid);
    // Part 1
     c+=dnc(arr,mid+1,e);
    
//    SortAndMerge
    c+=mergesort(arr,s,e);
    
    return c;
}

int main(int argc, const char * argv[]) {
    vector<int>arr = {2, 4, 1, 3, 5};
    int n = arr.size();
    cout<<dnc(arr,0,n-1);
}
