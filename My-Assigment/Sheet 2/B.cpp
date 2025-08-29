#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    bool is_even = n == 1;
 
    for (int i = 2; i <= n; i = i + 2) {
            if (!(i == 2))
                cout << "\n";
            cout << i;
        }
 
    if (is_even)
        cout << -1 << "\n";
 
 
    return 0;
}
