#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    long long p1;
    long long p2;
 
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            p1 = 0;
            cout << p1 << " ";
        }
        else if (i == 1) {
            p2 = 1;
            cout << p2 << " ";
        }
        else if (i > 1) {
            int temp = p2;
            p2 = p1 + p2;
            p1 = temp;
            cout << p2 << " ";
        }
 
    }
 
 
    return 0;
}