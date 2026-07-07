#include <iostream>
#include <climits>
using namespace std;

int main() {
int nums[6] = {3, 30, 34, 5, 9, 0};
int size = 6;
int largest = INT_MIN;
        for (int i=0; i<size; i++) {
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }
    cout << "The largest number in the array is: " << largest << endl;
   return 0; 
}
