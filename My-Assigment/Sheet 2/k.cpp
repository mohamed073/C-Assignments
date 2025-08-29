#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    for (int num = 1; num <= n; num++) {
        if (n % num == 0)
            cout << num << "\n";
    }
 
    return 0;
}
