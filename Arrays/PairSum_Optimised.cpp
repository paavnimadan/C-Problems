#include <iostream>
#include <vector>
using namespace std;

int arr[4] = {2,7,11,15};

int main() {
    int arr[4] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;
    int i = 0, j = n - 1;

    while (i < j) {
        int pairsum = arr[i] + arr[j];
    if(pairsum > target){
        j--;}
    else if (pairsum < target){
        i++;}
    else {
        cout << "pair is found : " << arr[i] << " " << arr[j];
        break;
    }
}
       return 0;
}