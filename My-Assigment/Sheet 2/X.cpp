#include <iostream>
#include <iomanip>
#include <math.h>
 
 
 
using namespace std;
 
int main(){
    int t;
    long long n;
    cin >> t;
    while(t--) {
        cin >> n;
        long long decimal_sum = 0;
        int cnt_ones = 0;
 
        while(n != 0) {
          cnt_ones += (n&1);
          n >>= 1;
        }
        decimal_sum = (1L << cnt_ones) - 1;
        cout << decimal_sum << "\n";
    }
 
    return 0;
}