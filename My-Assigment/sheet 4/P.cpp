#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

    string s;
    getline(cin, s);
    int cnt_word = 0;
    bool in_word = false;

    for (char c : s) {
        if ((c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z')) {
                if (!in_word){
                    cnt_word++;
                    in_word = true;
                }
            }

            else
                in_word = false;
    }
    cout << cnt_word << "\n";
    return 0;
}
