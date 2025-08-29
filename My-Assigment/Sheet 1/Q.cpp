#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
    double x,y;
    cin >> x>>y;
 
    if (x > 0.0 && y > 0.0)
        cout << "Q1\n";
    else if (x < 0.0 && y > 0.0)
        cout << "Q2\n";
    else if (x < 0.0 && y < 0.0)
        cout << "Q3\n";
    else if (x > 0.0 && y < 0.0)
        cout << "Q4\n";
    else if (x == 0.0 && y == 0.0)
        cout << "Origem\n";
    else if ((x >=  -1000.0 && x <= 1000.0) && y == 0.0)
        cout << "Eixo X\n";
    else if ((y >=  -1000.0 && y <= 1000.0) && x == 0.0)
        cout << "Eixo Y\n";
 
    return 0;
}