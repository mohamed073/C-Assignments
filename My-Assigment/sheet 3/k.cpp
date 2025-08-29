#include <iostream>
using namespace std;

int main() {

    unsigned long n;
    cin >> n;
    char a[n];



    unsigned long sum = 0;
    unsigned long i;
    for (i = 0; i < n; ++i) { // 123 12 1
        cin >> a[i];
        sum += (unsigned long)(a[i] - '0');
    }
    cout << sum << "\n";

    return 0 ;
}
