// S.Search In Matrix
#include <iostream>
using namespace std;

int main() {

    unsigned short n, m;
    cin >> n >> m;
    unsigned long a[n][m];
    unsigned long x;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    }

    cin >> x;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            if (a[i][j] == x) {
                found = true;
                break;
            }
    }
    if (!found)
        cout << "will take number\n";
    else
        cout << "will not take number\n";

    return 0;
}
