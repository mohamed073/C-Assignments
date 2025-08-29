// Q. Count Subarrays

#include <iostream>
using namespace std;

int main() {

    unsigned short t;
    cin >> t;

    while (t--) {
        unsigned short n;
        unsigned short inc_cnt = 0;

        cin >> n;
        long arr [n];

        for (int i = 0; i < n; ++i) // initialize array's elements
            cin >> arr[i];

        for (long ws = 1; ws <= n; ws++) {  // update window size (ws).
            // zero-based start/end window's index.
            long start_idx = 0;
            long end_idx = ws - 1;

            while (!(end_idx > n - 1)) {
                bool is_inc = true;
            
                for (long idx = start_idx + 1; idx <= end_idx; ++idx) {// getting max sub-array value
                    if (arr[idx] < arr[idx -1]) {
                        is_inc =false;
                        break;
                    }
                }
                if (is_inc)
                    inc_cnt++;

                start_idx++;
                end_idx++;
            }
        }
        cout << inc_cnt << "\n";
    }

    return 0;
}
