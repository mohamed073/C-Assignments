#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
 
    double const PI = 3.141592653;
    double r;
    cin >> r;
 
    double area  = (PI) * (r* r);
    cout  <<fixed << setprecision(9);
    cout << area;
 
 
 
    return 0;
}