// T. Matrix
#include <iostream>
using namespace std;

int main() {
    unsigned short n;
    cin >> n;
    short arr[n][n];

    int prim_sum = 0;
    int sec_sum = 0;
    for (short i = 0; i < n; ++i) {
        for (short j = 0; j < n; ++j) {
            cin >> arr[i][j]; // getting value
            if (i == j)
                prim_sum += arr[i][j];
            if (j == n-1-i)
                sec_sum += arr[i][j];
        }
    }

    int total_diff = prim_sum - sec_sum;

    if (total_diff < 0)
        total_diff = total_diff * -1;

    cout << total_diff << "\n";

    return 0;
}
