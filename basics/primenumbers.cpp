#include <iostream>
 using namespace std;
 int main()   {
    int n;
    cout << "enter a number" << endl;
    cin  >> n;
    bool isPrime = true;
    
    
    for(int i=2;i<=n-1;i++) {
        if (n%i==0){
            isPrime = false;
            break;
        }
    }
  if(isPrime==true) {
    cout << "it is a prime number" << endl;
  } else {
    cout << "it is not a prime number" << endl;
  }

 return 0;
 }
