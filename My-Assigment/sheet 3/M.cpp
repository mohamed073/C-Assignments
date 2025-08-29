#include <iostream>
using namespace std;

void swap_vlaues(long &x, long &y) {
    long temp = x;
    x = y;
    y = temp;
}
int main() {

    unsigned short n;
    cin >> n;
    long arr [n];

    for (int i = 0; i < n; ++i) // initialize array's elements
        cin >> arr[i];

    unsigned short min_idx = 0;
    unsigned short max_idx = 0;
    long max_value = LONG_MIN;
    long min_value = LONG_MAX;

    for (unsigned short idx = 0; idx < n; ++idx) { // getting max sub-array value
        if (min_value > arr[idx]) {
            min_value = arr[idx];
            min_idx = idx;

        }
        if (max_value < arr[idx]) {
            max_value = arr[idx];
            max_idx = idx;
        }
    }

    // swap max value with min one.
    swap_vlaues(arr[min_idx], arr[max_idx]);

     for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';


    return 0;
}
