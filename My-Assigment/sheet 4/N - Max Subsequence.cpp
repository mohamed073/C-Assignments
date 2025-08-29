#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string max_sub = "";
    for (int i = 0; i < n; ++i) {
        if (s[i] != max_sub[max_sub.size()- 1])
            max_sub += s[i];
    }

    cout << max_sub.size() << "\n";
    return 0;
}
