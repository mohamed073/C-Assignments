#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    long long n;
    cin >> n;
 
    long long cpy_val = n;
    long long rever_num = 0;
 
    while(cpy_val != 0) {
        int last_digit = cpy_val % 10; //get last digit
        cpy_val = cpy_val / 10; // remove last digit
        rever_num = (rever_num * 10) + last_digit; // appending last digit
    }
    if (rever_num == n) {
        cout << rever_num << "\n";
        cout << "YES\n";
    } else {
        cout << rever_num << "\n";
        cout << "NO\n";
    }
    return 0;
}