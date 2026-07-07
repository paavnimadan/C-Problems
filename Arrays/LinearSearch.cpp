#include <iostream>
#include <climits>
using namespace std;
 
   int linearsearch( int arr[], int size, int target) {
    for (int i=0; i<size; i++) {
        if ( arr[i] == target) {
            return i;
        }
    }
    return -1;
}
    int main() {
        int arr[8] = {2,66,44,23,90,12,34,56};
        int size = 8;
        int target;
        cout << "Enter the number to search for: ";
        cin >> target;
        cout << "The number is found at index: " << linearsearch(arr,size,target) << endl;

        return 0;
    }
