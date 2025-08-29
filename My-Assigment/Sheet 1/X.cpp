#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    long l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
 
    long max_l = l1 > l2 ? l1 : l2;
    long min_r = r1 < r2 ? r1 : r2;
 
    if (max_l > min_r)
        cout << -1 <<"\n";
    else
        cout << max_l << " " << min_r << "\n";
 
    return 0;
}