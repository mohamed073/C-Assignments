#include <iostream>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    int small_len = x.size() < y.size() ? x.size() : x.size();

    string small_str = "";
    for (int i = 0; i < small_len; i++) {
        if (x[i] == y[i]) {
            small_str = x;
            continue;
        }
        else if (x[i] < y[i])
            small_str =  x;
        else   // y[i] < x[i]
            small_str =  y;
        break;
    }

    cout << small_str << "\n";

    return 0;
}
