#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
    long long n;
    long long m;
 
    cin >> n >> m;
 
    int last_digit_n = n % 10;
    int last_digit_m = m % 10;
    int sum = last_digit_n + last_digit_m;
 
    cout << sum;
 
 
 
 
    return 0;
}