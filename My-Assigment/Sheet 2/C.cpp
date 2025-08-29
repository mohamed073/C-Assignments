#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
   int n, num;
   cin >> n;
 
    int cnt_even = 0;
    int cnt_odd = 0;
    int cnt_posit = 0;
    int cnt_negat = 0;
 
    while(n--){
        cin >> num;
 
        if (num > 0)   // positive
            cnt_posit++;
 
        else if(num < 0) // negative
            cnt_negat++;
 
        if (num % 2 == 0) // even
            cnt_even++;
        else
            cnt_odd++;
    }
    cout << "Even: " << cnt_even << "\n";
    cout << "Odd: " << cnt_odd << "\n";
    cout << "Positive: " << cnt_posit << "\n";
    cout << "Negative: " << cnt_negat;
 
    return 0;
}