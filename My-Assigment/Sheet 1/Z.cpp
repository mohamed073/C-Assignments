#include <iostream>
#include <iomanip>
#include <math.h>
 
 
 
using namespace std;
 
int main(){
 
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
 
    double lhs= b * log((double)a);
    double rhs= d * log((double)c);
 
    if (lhs > rhs)
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}