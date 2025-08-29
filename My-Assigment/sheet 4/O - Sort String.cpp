#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    long n;
    string s;
    cin >> n;
    cin >> s;

    char temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; ++j) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }

        }
    }
    cout << s << "\n";
    return 0;
}
