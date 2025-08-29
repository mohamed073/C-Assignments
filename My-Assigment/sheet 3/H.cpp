// N. Check Code
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    unsigned short int a, b;
    string s;

    cin >> a >> b;
    cin >> s;

    bool is_true = true;
    for (int i = 0; s[i] != '\0'; i++) {
        if (i == a){
            if (s[i] != '-') {
                is_true = false;
                break;
            }
            continue;
        }
        if (!(s[i] >= '0' && s[i] <= '9')) {
            is_true = false;
            break;
        }
    }

    if (!is_true)
        cout << "No\n";
    else
        cout << "Yes\n";

    return 0;
}
