#include <iostream>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;

    while(t--) {
        cin >> s;
        int sz = s.size();
        string abrv = s;
        if (sz > 10)
            cout << s[0] << "" << (sz - 2)
                 << "" << s[sz - 1] << '\n';
        else
            cout << s << '\n';
    }
    return 0;
}
