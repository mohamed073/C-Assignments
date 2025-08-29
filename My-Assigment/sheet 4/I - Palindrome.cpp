#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool is_palindrome = true;
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s[i] != s[s.size()-1-i]){
            is_palindrome = false;
            break;
        }
    }
    if (!is_palindrome)
        cout << "NO\n";
    else
        cout << "YES\n";


    return 0;
}
