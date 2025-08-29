#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
    long a;
    long b;
    long c;
 
    cin >> a >> b >> c;
    long max_num = a;
    long min_num = a;
 
    if ( max_num < b )
        max_num = b;
    if (max_num < c )
        max_num = c;
 
    if ( min_num > b )
        min_num = b;
    if (min_num > c )
        min_num = c;
 
    cout << min_num << " " << max_num << "\n";
 
    return 0;
}