#include <iostream>
using namespace std;
int main()  {

int  a , b;
cout << " enter a and b" << endl;
cin >> a >> b;

cout << " Sum = " << (a+b) << endl;
cout << " Difference = " << (a-b) << endl;
cout << " Product = " << (a*b) << endl;
cout << " Division = " << (float)a / b << endl;
cout << " Quotient = " << (a/b) << endl;
cout << " Remainder = " << (a%b) << endl;
return 0;
}