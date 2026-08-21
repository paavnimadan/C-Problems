#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr , int tar){
   int n=arr.size(), st = 0, end = n-1;
    
    while(st <= end){
        int mid = (st+end)/2;
         if(tar > arr[mid]){
             st = mid+1;}
         else if(tar < arr[mid]){
            end = mid-1;}
         else {
             return mid;}
        
         
    }
    return -1;
}
   int main(){
       vector<int> arr1 = {-1,0,3,4,5,9,12};
       int tar1 = 12;
       cout << BinarySearch(arr1 , tar1);
       }