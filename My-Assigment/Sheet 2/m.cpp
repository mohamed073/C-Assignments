#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
    long a, b;
    cin >> a >> b;
    int cnt_lucky = 0;
 
    for ( long num = a; num <= b; ++num) {
 
        bool is_lucky = true;
        long cpy_val = num;
        while (cpy_val) {
            int last_digit = cpy_val % 10;
 
            if (!( last_digit == 4 || last_digit == 7 )) {
                is_lucky = false;
                break;
            }
            cpy_val = cpy_val / 10;
        }
 
        if (is_lucky) {
            cout << num << " ";
            cnt_lucky++;
        }
    }
 
    if (cnt_lucky == 0)
        cout << -1 << "\n";
 
    return 0;
}