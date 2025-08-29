#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
    int t, n;
    cin >> t;
 
    while (t--) {
        cin >> n;
        long long result = 1;
 
        if (n == 0){
            cout << 1 << "\n"; // zero case.
            continue;
        }
 
        for (int i = 1; i <= n ; ++i)
            result *= i;
        cout << result <<"\n";
 
    }
 
    return 0;
}