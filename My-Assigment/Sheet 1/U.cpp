#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    float n;
    cin >> n;
    float fraction = n - (int)n;
 
    cout << fixed << setprecision(3);
    if (fraction == 0) // integer
        cout << "int " << (int)n << "\n";
 
    else if (fraction > 0) // float
        cout << "float " << (int)n << " " << fraction <<"\n";
 
    return 0;
}