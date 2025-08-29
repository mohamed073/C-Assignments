#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
 int n;
 cin >> n;
 for (int r = 0; r < n; ++r) {
    for (int c = 0; c < n + r; ++c) {
        if (c < n - r - 1)
            cout << " ";
        else
            cout << "*";
        }
    cout << "\n";
 }
 
 for (int r = n - 1; r >= 0; --r) {
    for (int c = 0; c < n + r; ++c) {
        if (c < n - r - 1)
            cout << " ";
        else
            cout << "*";
        }
    cout << "\n";
 }
 
 
    return 0;
}