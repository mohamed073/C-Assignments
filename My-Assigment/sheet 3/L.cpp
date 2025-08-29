#include <iostream>
using namespace std;

int main() {

    unsigned short t;
    cin >> t;

    while (t--) {
        unsigned short n;
        cin >> n;
        long arr [n];

        for (int i = 0; i < n; ++i) // initialize array's elements
            cin >> arr[i];

        for (long ws = 1; ws <= n; ws++) {  // update window size (ws).
            // zero-based start/end window's index.
            long start_idx = 0;
            long end_idx = ws - 1;

            while (!(end_idx > n - 1)) {
                long max_value = LONG_MIN;
                for (long idx = start_idx; idx <= end_idx; ++idx) {// getting max sub-array value
                    if (max_value < arr[idx])
                        max_value = arr[idx];
                }
                cout << max_value << " ";
                start_idx++;
                end_idx++;
            }
        }
        cout << "\n";
    }

    return 0;
}
