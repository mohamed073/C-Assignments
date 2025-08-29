#include <iostream>
using namespace std;

int main() {
    long long n;
    long long x;
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cin >> x;

    long long idx = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            idx = i;
            break;
        }
    }

   cout << idx;
    return 0;
}
