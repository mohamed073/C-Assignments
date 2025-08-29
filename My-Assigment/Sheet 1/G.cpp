#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    long long sum_formula = ( n * (n + 1) ) / 2;
    cout << sum_formula;
 
    return 0;
}