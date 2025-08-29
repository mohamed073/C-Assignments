#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    int t;
    long n;
    cin >> t;
 
    while(t--) {
        cin >> n;
        do {
            int last_dig = n % 10; //get last digit
            n = n / 10; // remove last digit
            cout << last_dig << " ";
        } while(n != 0);
        cout << "\n";
    }
 
 
    return 0;
}