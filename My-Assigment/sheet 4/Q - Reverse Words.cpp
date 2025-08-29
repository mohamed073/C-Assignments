#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

    string s;
    getline(cin, s);
    int s_idx = 0;
    int e_idx = 0;
   int n = s.size();

    for (int i = 0; i <= n; ++i) {
        if (i == n ||s[i] == ' ') {
           e_idx = i - 1;     // idx before space

            //reverse Algo
            int sz = e_idx - s_idx + 1;
            for (int j = 0; j < sz / 2; ++j) {
                char temp = s[j + s_idx];
                s[j + s_idx] = s[e_idx - j];
                s[e_idx - j] = temp;
            }

            s_idx = i + 1; // idx after space
        }
    }

    cout << s << "\n";
    return 0;
}
