#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
    int t, x, y;
    cin >> t;
    int sum = 0;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
 
    while(t--){
        int sum = 0;
        cin >> x >> y;
 
        min_val = x <= y ? x : y;
        max_val = x >= y ? x : y;
 
        for (int i = min_val +1 ; i <= max_val - 1; ++i){
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << "\n";
    }
 
 
    return 0;
}