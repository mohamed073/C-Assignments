#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt_char[26] {0};
    for (int i = 0; i < s.size(); ++i) {
        int idx = s[i] - 'a';
        cnt_char[idx]++;
    }

    for (int i = 0; i < 26 ; ++i) {
        if (cnt_char[i] == 0)
            continue;

        cout << (char)(i + 'a') << " : "
             <<cnt_char[i] << "\n";
    }


    return 0;
}
