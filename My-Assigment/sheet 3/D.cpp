
#include <iostream>
using namespace std;

int main() {
    short int n;
    cin >> n;
    long a [n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for(int i = 0; i < n; ++i) {
        if (a[i] <= 10)
            cout << "A[" << i << "] = "
                 << a[i] << "\n";
    }




    return 0;
}
