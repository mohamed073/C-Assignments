#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

bool is_palindrome(const std::string &s) {
    deque<char> dq;

    for (char c : s) {
        if (c != ' ')  // remove spaces
            dq.push_back(toupper(c));
    }

    while(dq.size() > 1) {
        char f = dq.front();
        dq.pop_front();

        char b = dq.back();
        dq.pop_back();

        if (f != b)
            return false;
    }
    return true;
}

int main() {

    string str1 = "AABB A A";
    string str2 = "Hello";

    cout << boolalpha;
    cout << is_palindrome(str1) << "\n";
    cout << is_palindrome(str2) << "\n";

    return 0;
}
