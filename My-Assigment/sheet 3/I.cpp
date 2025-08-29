// I. Smallest Pair
#include <iostream>
using namespace std;

int main() {

    unsigned int t;
    cin >> t;
    while (t--) {
        unsigned int n;
        cin >> n;
        long long a [n];

        for (long long i = 0; i < n; ++i)
            cin >> a[i];

        long long min_value = LONG_MAX;
        for(long long i = 0; i < n - 1; ++i) { // 60 40 50 30 10 20
            for (long long j = i + 1; j < n; ++j) {
                long formula = a[i] + a[j] + j - i;
                if (min_value > formula)
                    min_value = formula;
            }
        }
        cout << min_value << "\n";
        }
        return 0;
}
