#include <iostream>
using namespace std;

double MinOfTwo(double a, double b) {
  if(a < b){
    return a;
  } else {
    return b;
  }
}

int main() {
  cout << "min=" << MinOfTwo(2.123, 5.321) << endl;
    return 0;
}