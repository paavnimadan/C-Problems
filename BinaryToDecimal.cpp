#include <iostream>
using namespace std;

int BinaryToDecimal (int BinNum) {
    int ans = 0;
    int pow = 1;
   while (BinNum > 0) {
    int rem = BinNum%10;
    ans+= rem*pow;
    pow*=2;
    BinNum/=10;
   }
   return ans;
}
 
int main() {
    int BinNum;
    cout << "Enter a binary number: ";
    cin >> BinNum;
    cout << "Decimal equivalent: " << BinaryToDecimal(BinNum) << endl;
    return 0;
}
