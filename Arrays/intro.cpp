#include <iostream>
using namespace std;

int main() {
   int size=5;
   int marks[size];
   //loop for entering the marks in array
   for(int i=0; i<size; i++) {
      cout << "Enter marks for student " << (i+1) << ": ";
      cin >> marks[i];
   }
   //loop for outputting the marks in array
   for (int i=0; i<size; i++) {
      cout << "Marks of student " << (i+1) << ": " << marks[i] << endl;
   }

    
return 0;
}