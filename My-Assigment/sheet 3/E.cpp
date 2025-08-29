
#include <iostream>
using namespace std;

int main() {
    short int n;
    cin >> n;
    long a [n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    long min_value = LONG_MAX;
    short int min_idx = 0;
    for(int i = 0; i < n; ++i) {
        if (a[i] < min_value)
            min_value = a[i], min_idx = i;
    }
    cout << min_value << " "
         << min_idx + 1 << "\n";


    return 0;
}
