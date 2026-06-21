#include <iostream>
using namespace std;

int main() {

int n;
cout << "enter number of rows" << endl;
cin >> n;

for(int i=0; i<n; i++){
    //loop for spaces
    for(int j=0; j<i; j++){                        // no. of spaces = i 
        cout << " ";
    }
    //loop for nums
    for(int j=0; j<n-i; j++){            // no. of numericals = n-i
        cout << (i+1);  // i+1 ke baad space firse print krwaenge to alag dikhega
    }
cout << endl;
}
return 0;
}