#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    int x;
    cin >> x;
    bool is_prime = true;
 
    for (int n = 2; n < x; ++n){
        if (x % n == 0){
            cout << "NO\n";
            is_prime = false;
            break;
        }
    }
    if (is_prime)
        cout << "YES\n";
 
 
 
    return 0;
}