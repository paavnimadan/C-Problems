#include <iostream>
   using namespace std;

int main()  {
int n;
cout << "enter a number n" << endl;
cin >> n;
int oddSum =0;

for (int i=1; i<=n; i++ ){
  if(i%2!=0) 
  oddSum += i;
}
cout << "sum off odd numbers is " << oddSum << endl;
  return 0;
}