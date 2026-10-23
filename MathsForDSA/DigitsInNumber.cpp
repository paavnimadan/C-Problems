#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "enter an integer" << endl;
    cin >> n;
    cout << (int)(log10(n)+1) << endl;

    return 0;
}