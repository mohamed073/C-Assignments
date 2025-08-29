#include <iostream>
using namespace std;

int main() {
    string s;
    int n;
    cin >> n;
    cin >> s;
    long long score = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'V') {
            score += 5;
        }
        else if (s[i] == 'W') {
            score += 2;
        }
        else if (s[i] == 'X' && i < n - 1) {
            // Remove next character
            for (int j = i + 2; j < n; ++j) {
                s[j - 1] = s[j];
            }
            n--;
        }
        else if (s[i] == 'Y' && i < n - 1) {
            // Move next character to end
            char temp = s[i + 1];
            for (int j = i + 2; j < n; ++j) {
                s[j - 1] = s[j];
            }
            s[n - 1] = temp;
        }
        else if (s[i] == 'Z' && i < n - 1) {
            bool found = false;
            if (s[i + 1] == 'V') {
                score /= 5;
                found = true;
            }
            else if (s[i + 1] == 'W') {
                score /= 2;
                found = true;
            }
            if (found) {
                for (int j = i + 2; j < n; ++j) {
                    s[j - 1] = s[j];
                }
                n--;
            }
        }
    }

    cout << score << "\n";
    return 0;
}
