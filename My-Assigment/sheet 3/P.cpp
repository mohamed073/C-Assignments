// P. Minimize Number
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    unsigned short n;
    cin >> n;
    unsigned long a[n];

    for (int i =0; i < n; ++i)
        cin >> a[i];

    bool is_even = true;
    short op_cnt = 0; // for counting # operations
    while(true) {
        for (int i =0; i < n; ++i) {
            is_even = (a[i] % 2 == 0) ? true : false;
            if(!is_even)
                break; // break if it not even integer (for).
            a[i] = a[i] / 2; // update array's element.
        }
        if(!is_even)
            break; // break if it not even integer (while).
        op_cnt++; // increment # operations
    }
    cout << op_cnt << "\n";



    return 0;
}
