#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
    int x;
    cin >>x;
 
    int qutient;
    while(!(x >= 1 && x <= 9)) {
        qutient = x / 10;
        x = qutient;
    }
    if (x % 2 == 0)
        cout <<"EVEN\n";
    else
        cout <<"ODD\n";
 
    return 0;
}