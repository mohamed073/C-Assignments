// Z. Binary Search (there is an error)

#include <iostream>
#include <algorithm>
using namespace std;

bool check_value(unsigned long long arr[], unsigned long n, unsigned long long x) {
    unsigned long long s_idx = 0;
    unsigned long long e_idx = n - 1;

    while(s_idx <= e_idx) {
        unsigned long long m_idx = s_idx + (e_idx - s_idx) / 2;
        if (x == arr[m_idx])
            return true;

        else if (x > arr[m_idx])
            s_idx = m_idx + 1;

        else if (x < arr[m_idx])
            e_idx = m_idx - 1;
    }
    return false;
}

int main() {
    unsigned long n, q;
    cin >> n >> q;
    unsigned long long arr[n];
    unsigned long i;

    // getting the array's values
    for (i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr, arr + n);

    unsigned long x;  // Value We search with.
    bool is_found = true;
    while(q--) {   // counting # iterations
        cin >> x;
        is_found = check_value(arr, n, x);
        if (!is_found)
            cout << "not found\n";
        else
            cout << "found\n";
    }

    return 0;
}
