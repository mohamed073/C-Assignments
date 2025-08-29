#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;
    long long a [n];

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    bool is_palindrome = true;
    for(long i = 0; i < (long)n/2; ++i) {
        if (a[i] != a[n-i-1]) {
            is_palindrome = false;
             break;
        }
    }
    if (!is_palindrome)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}
