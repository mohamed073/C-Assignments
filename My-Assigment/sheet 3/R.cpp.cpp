// R - Permutation with arrays

#include <iostream>
using namespace std;

void swap_elements(unsigned long &x, unsigned long &y) {
    unsigned long temp = x;
    x = y;
    y = temp;
}

int main() {

   unsigned short n;
   cin >> n;
   unsigned long a [n];
   unsigned long b [n];

    for (unsigned short i = 0; i < n; ++i) // initialize array's A elements
        cin >> a[i];

    for (unsigned short i = 0; i < n; ++i) // initialize array's A elements
        cin >> b[i];

    bool is_permutated = true;

    for (unsigned short i = 0; i < n - 1; ++i) {
        unsigned short min_idx_a = i;
        unsigned short min_idx_b = i;

        for (unsigned short j = i + 1; j < n; ++j) {
            if (a[min_idx_a] >= a[j])
                min_idx_a = j;

            if (b[min_idx_b] >= b[j])
                min_idx_b = j;
        }

        swap_elements(a[min_idx_a],a[i]);
        swap_elements(b[min_idx_b],b[i]);
        if (a[i] != b[i]) {
            is_permutated = false;
            break;
        }
    }

    if (is_permutated) {
        if (a[n-1] != b[n-1])
            cout << "no\n";
        else
            cout << "yes\n";
    }
    else
        cout << "no\n";


    return 0;
}
