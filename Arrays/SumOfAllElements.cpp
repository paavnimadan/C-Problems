#include <iostream>
using namespace std;

int main() {
     int arr[8] = {10,15,20,25,30,35,40,45};
     int size = 8;
     int sum = 0;

     for (int i = 0; i< size; i++) {
        sum = sum + arr[i];

     }
cout << "Sum of all elements in the array is: " << sum << endl;

     return 0;
}