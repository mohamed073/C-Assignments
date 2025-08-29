#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;

    while(t--) {
        cin >> s;
        bool is_good = false;
        for (int i = 0; i < s.size() - 2; ++i) {
            is_good = s[i] != s[i+1] &&
                      s[i+1] != s[i+2];
          if (is_good)
            break;
        }
        if (!is_good)
            cout << "Bad\n";
        else
            cout << "Good\n";
    }

    return 0;
}
