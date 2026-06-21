#include <iostream>
using namespace std;

int factorial(int n) {
    int fact=1;
    for (int i=1; i<n+1; i++) {
    fact=fact*i;
    }
    return fact;

}
int main() {

   int n,r;

    cout<<"Enter n and r: ";
    cin>>n>>r;
    int ncr = factorial(n) / (factorial(r) * factorial(n-r));
    cout<<" Binomial  Coefficient  is "<<ncr<<endl;
    return 0;
}