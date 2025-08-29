#include <iostream>
using namespace std;

void swap_val(unsigned long long &x, unsigned long long &y) {
    unsigned long long temp = x;
    x = y;
    y = temp;
}

int main() {
    unsigned short n, m;
    cin >> n >> m;
    unsigned long long arr[n][m];

    unsigned short r; // # rows
    unsigned short c; // # columns

    for ( r= 0; r < n; ++r) {
        for (c = 0; c < m; ++c)
            cin >> arr[r][c];
    }

    for ( r= 0; r < n; ++r) {
        for (c = 0; c < m / 2; ++c)
            swap_val(arr[r][c], arr[r][m-1-c]);
    }


    for ( r= 0; r < n; ++r) {
        for (c = 0; c < m; ++c)
            cout << arr[r][c] << " ";
        cout << "\n";
    }

    return 0;
}
