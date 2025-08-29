#include <iostream>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;

    short a_size = a.size();
    short b_size = b.size();

    string c = a + b; // concatenating

    //swapping first char
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a_size << " " << b_size << "\n";
    cout << c << "\n";
    cout << a << " " << b << "\n";

    return 0;
}
