#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;

    string input;
    int l,r,pos;
    char x;
    while(q--) {
        cin >> input;
        if (input == "pop_back")
            s.pop_back();

        else if (input == "front")
            cout << s.front() << "\n";

        else if (input == "back")
            cout << s.back() << "\n";

        else if (input == "sort") {
            cin >> l >> r;
            l--;
            r--;
            sort(s.begin() + l, s.begin() + r + 1);
        }
        else if (input == "reverse") {
            cin >> l >> r;
            int sz = r - l + 1;
            l--; r--;
            reverse(s.begin()+ l, s.begin() + r + 1);
        }
        else if (input == "print") {
            cin >> pos;
            cout << s[pos - 1] << "\n";
        }
        else if (input == "substr") {
            cin >> l >> r;
            l--;r--;
            cout << s.substr(l, r - l +1) << "\n";
        }
        else if (input == "push_back") {
            cin >> x;
            s.push_back(x);
        }

    }


    return 0;
}
