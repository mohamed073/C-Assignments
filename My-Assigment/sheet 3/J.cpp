// J. Lucky Array
#include <iostream>
using namespace std;

int main() {

    unsigned int n;
    cin >> n;
    long long a [n];

    for (long long i = 0; i < n; ++i)
        cin >> a[i];

    long long min_value = LONG_MAX;
    for(long long i = 0; i < n; ++i) {
        if (min_value > a[i])
            min_value = a[i];
    }

    unsigned int  cnt = 0;
    for(long long i = 0; i < n; ++i) {
        if (a[i] == min_value)
            cnt++;
    }
    if (cnt % 2 == 0)
        cout << "Unlucky\n";
    else
        cout << "Lucky\n";

    return 0;
}
