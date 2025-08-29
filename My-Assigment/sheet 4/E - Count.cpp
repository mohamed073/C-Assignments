#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    long sz = s.size();

    int sum = 0;
    for (long i = 0; i < sz; ++i) {
        sum += (int) (s[i] - '0');
    }
    cout << sum << "\n";

    return 0;
}
