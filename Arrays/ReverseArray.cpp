#include <iostream>
#include <climits>
using namespace std;

void reverseArray(int arr[], int sz){
    int start = 0;
    int end = sz-1;
    while (start<end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {5, 6, 9, 7, 8};
    int sz = 5;

    reverseArray(arr, sz);

    for (int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
     
    return 0;
}