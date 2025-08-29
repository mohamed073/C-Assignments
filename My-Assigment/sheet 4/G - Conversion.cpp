#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
            s[i] -= 32;
        else if (ch >= 'A' && ch <= 'Z')
            s[i] += 32;
        else if (ch == ',')
            s[i] = ' ';
    }
   cout << s << "\n";

    return 0;
}
